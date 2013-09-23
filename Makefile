all: dump_sve 
#SVETemplate.py 
dump_sve: dump_sve.cpp SVEFormat.h
	g++ -fshort-enums dump_sve.cpp -o dump_sve

SVETemplate.bt: SVEFormat.h
	cpp -D__BTC__ SVEFormat.h > SVETemplate.bt

#%.py: %.bt
#	python ../btc.py $< 
