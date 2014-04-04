# règles qui ne créent pas de fichier
.PHONY: exec, clean, mrproper
 
# désactivation des règles implicites
.SUFFIXES:


all: matricepleine.o main.cpp
		g++ main.cpp matricepleine.o -o MatriceGenieLog

matricepleine.o: matricepleine.cpp matricepleine.h
		g++ -c matricepleine.cpp -o matricepleine.o
 
exec: all
		MatriceGenieLog

clean:
		rm -rf *.o
 
mrproper: clean
		rm -rf MatriceGenieLog
