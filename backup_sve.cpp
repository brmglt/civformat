#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "SVEFormat.h"

#ifndef MAX_PATH
#define MAX_PATH 1024
#endif

const char* LevelNames[] = {
	"Chieftan",
	"Warlord",
	"Prince",
	"King",
	"Emperor"};

void copy_file(const char* src, const char *dst)
{
	printf("Copy %s to %s\n", src, dst);
	using namespace std;
	ifstream in(src);
	ofstream out(dst);
	out<<in.rdbuf(); // copy file
	in.close();
	out.close();

}
bool backup_file(char* fname, const char* backup_dir)
{
	FILE *f = fopen(fname, "rb");
	if(!f)
	{
		char errbuf[MAX_PATH+100];
		sprintf(errbuf, "Cannot open file %s", fname);
		perror(errbuf);
		return false;
	}
	fread(&sveFile, (sizeof(SVEFile::SVEHeader)) + 8*(sizeof(SVEFile::LeaderString)) + 8*(sizeof(SVEFile::NationPluralString)), 1, f);
	fclose(f);
	char path[MAX_PATH];
	int playerNum = sveFile.sveHeader.playerNum;
	sprintf(path, "%s/%s, %s of %s, %i.SVE", backup_dir, sveFile.leaders[playerNum].name, LevelNames[sveFile.sveHeader.level], sveFile.nationsPlural[playerNum].name, sveFile.sveHeader.year);
	copy_file(fname, path);
	strcpy(fname + strlen(fname) - 4, ".MAP");
	strcpy(path + strlen(path) - 4, ".MAP");
	copy_file(fname, path);
	return true;
}
int main(int argc, char* argv[])
{
	char path[MAX_PATH];
	char backup_dir_full[MAX_PATH];
	const char* backup_dir = "backups";
	int i;
	if(argc > 2)
	{
		sprintf(backup_dir_full, "%s", argv[2]);
	}
	else
		if(argc > 1)
		{
			sprintf(backup_dir_full, "%s/%s", argv[1], backup_dir);
		}
		else
		{
			sprintf(backup_dir_full, "%s", backup_dir);
		}

	for(i=0; i < 10; i++)
	{
		if(argc > 1)
		{
			sprintf(path, "%s/CIVIL%i.SVE", argv[1], i);

		}
		else
		{
			sprintf(path, "CIVIL%i.SVE", i);
		}
		backup_file(path, backup_dir_full);
	}
}

