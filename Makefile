EXE=.exe
all: dump_sve$(EXE) backup_sve$(EXE) SVETemplate.py 

%$(EXE): %.cpp
	g++ -fshort-enums $< -o $@

SVETemplate.bt: SVEFormat.h
	cpp -D__BTC__ SVEFormat.h > SVETemplate.bt

%.py: %.bt
	python btc.py $< 
