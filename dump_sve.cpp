//#include "typedefs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <iostream>
#include <map>

#include "SVEFormat.h"
const char* GovermentNames[] = {
 "ANARCHY",
 "DESPOTISM",
 "MONARCHY",
 "COMMUNISM",
 "REPUBLIC",
 "DEMOCRACY"
};

const char* LevelNames[] = {
	"Chieftan",
	"Warlord",
	"Prince",
	"King",
	"Emperor"};

const char* TechNames[] = {
	"ALPHABET",
	"CODE_OF_LAWS",
	"CURRENCY",
	"ATOMIC_THEORY",
	"DEMOCRACY_TECH",
	"MONARCHY_TECH",
	"ASTRONOMY",
	"MAPMAKING",
	"NAVIGATION",
	"MATHEMATICS",
	"MEDICINE",
	"PHYSICS",
	"ENGINEERING",
	"UNIVERSITY",
	"MAGNETISM",
	"ELECTRONICS",
	"MASONRY",
	"BRONZE_WORKING",
	"IRON_WORKING",
	"BRIDGE_BUILDING",
	"INVENTION",
	"COMPUTERS",
	"WRITING",
	"STEAM_ENGINE",
	"TRADE",
	"CEREMONIAL_BURIAL",
	"MYSTICISM",
	"NUCLEAR_FISSION",
	"PHILOSOPHY",
	"RELIGION",
	"LITERACY",
	"HORSEBACK_RIDING",
	"FEUDALISM",
	"THE_WHEEL",
	"GUNPOWDER",
	"INDUSTRIALIZATION",
	"CHEMISTRY",
	"COMBUSTION",
	"FLIGHT",
	"ADVANCED_FLIGHT",
	"SPACE_FLIGHT",
	"MASS_PRODUCTION",
	"POTTERY",
	"COMMUNISM_TECH",
	"THE_REPUBLIC",
	"CONSTRUCTION",
	"ROCKETRY",
	"THE_CORPORATION",
	"METALLURGY",
	"RAILROAD",
	"NUCLEAR_POWER",
	"THEORY_OF_GRAVITY",
	"STEEL",
	"BANKING",
	"ELECTRICITY",
	"REFINING",
	"EXPLOSIVES",
	"SUPERCONDUCTOR",
	"AUTOMOBILE",
	"GENETIC_ENGINEERING",
	"PLASTICS",
	"RECYCLING",
	"CHIVALRY",
	"ROBOTICS",
	"CONSCRIPTION",
	"LABOR_UNION",
	"FUSION_POWER"
};

const char* WonderNames[] = {
	"The Pyramids",
	"The Hanging Gardens",
	"The Colossus",
	"The Lighthouse",
	"The Great Library",
	"The Oracle",
	"The Great Wall",
	"Magellan's Expedition",
	"Michelangelo's Chapel",
	"Copernicus Observatory",
	"Shakespeare's Theatre",
	"Isaac Newton's College",
	"J.S. Bach's Cathedral",
	"Darwin's Voyage",
	"Hoover Dam",
	"Women's Suffrage",
	"Manhattan Project",
	"United Nations",
	"Apollo Program",
	"Seti Program",
	"Cure For Cancer"
};


using namespace std;
struct Coords
{
		int x, y;
		Coords(int a_x, int a_y): x(a_x), y(a_y) {}
		bool operator <(const Coords b) const
		{
			 if(x != b.x)
				return x < b.x;
			 return y < b.y; 
		}

};
class SVEDumper
{
	SVEFile &sve;
	typedef struct SVEFile::City City;
	typedef map<Coords, City> CityMap;
	CityMap cities_by_xy;
	public:
		SVEDumper( SVEFile& sveFile): sve(sveFile)
	{
	}
	bool read(char* fname)
	{
		FILE *f = fopen(fname, "rb");
		if(!f)
			return false;
		fread(&sveFile, sizeof sveFile, 1, f);
		fclose(f);
		return true;
	}
	char *city_name(City &city)
	{
		return sve.cityNames[city.city].cityName;
	}

	void dump_cities()
	{
		for(int i = 0; i < (sizeof(sve.cities) / sizeof(City)); i ++)
		{
			City city = sve.cities[i];
			if(city.population)
			{
				cout << city_name(city) << ", "<< (int)city.population << "\tx: " << (int)city.x << "\ty: " << (int)city.y  << "\t" << sve.nations[city.player].name << "\t" << (int)city.production << endl;
				cities_by_xy[Coords(city.x, city.y)] = city;
			}
		}
	}
	void dump_units(int nation)
	{
		cout << "============================== UNITS of " << sve.nationsPlural[nation].name << "==============================\n";
		for(int i = 0; i < sizeof sve.armies[0].unit / sizeof(SVEFile::Army::Unit); i++)
		{
			SVEFile::Army::Unit &unit = sve.armies[nation].unit[i]; 
			if(unit.type != NONEXISTENT)
			{
				CityMap::iterator city = cities_by_xy.find(Coords(unit.x, unit.y));
				CityMap::iterator goto_city = cities_by_xy.find(Coords(unit.goto_x, unit.goto_y));
				cout << "x: " << (int)unit.x << "\ty: " << (int)unit.y << "\tsteps: " << (int)unit.steps << "\tstate: " << (int)unit.state << "\t" << sve.unitType[unit.type].unitName;
				if(city != cities_by_xy.end())
				{
					cout << "\tin city " << city_name(city->second);
				}
				if(goto_city != cities_by_xy.end())
				{
					cout << "\tgoto " << city_name(goto_city->second);
				}
				cout << endl;
			}
		}
	}
	void dump_civilization(int civ)
	{
		printf("%s of %s, %s\n", GovermentNames[sve.govermentType[civ]], sve.nationsPlural[civ].name, sve.leaders[civ].name);
	}
	void dump()
	{
		char future[16];
		sprintf(future, "FUTURE_TECH %i", sve.sveHeader.tech - FUTURE_TECH);
		printf("%s %s of %s, %i, researching %s\n", LevelNames[sve.sveHeader.level], sve.leaders[sve.sveHeader.playerNum].name, sve.nationsPlural[sve.sveHeader.playerNum].name, sve.sveHeader.year, sve.sveHeader.tech < FUTURE_TECH? TechNames[sve.sveHeader.tech]: future);
		dump_cities();
		for(int nation = 0; nation < 8; nation++)
		{
			dump_units(nation);
		}
		for(int wonder = 0; wonder < CURE_FOR_CANCER; wonder++)
		{
			int city = sve.wonders_cities[wonder];
			if(city > 0)
			{
				printf("%s in %s\n", WonderNames[wonder + 1], city_name(sve.cities[city]));
			}
		}
		for(int civ = 0; civ < 8; civ++)
		{
			if(sve.cityCount[civ])
			{
				dump_civilization(civ);
			}
		}
	}
} sveDumper(sveFile); 

int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s CIVIL0.SVE\n", argv[0]);
		exit(-1);
	}
	if(!sveDumper.read(argv[1]))
	{
		fprintf(stderr, "Error occured: %s\n", strerror(errno));

	}
	sveDumper.dump();
}

