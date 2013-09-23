if [ ! -d ${1:-.}/backups ]; then 
	mkdir ${1:-.}/backups
fi
for file in ${1:-.}/CIVIL?.SVE; do 
	fname=`./dump_sve $file|head -1|sed 's#[^A-Za-z0-9]#_#g'`
	cp $file ${1:-.}/backups/$fname.SVE
	cp ${file%.SVE}.MAP ${1:-.}/backups/$fname.MAP
done

