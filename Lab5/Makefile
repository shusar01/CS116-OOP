#
#
CC=g++
#
CFLAGS = -c -Wall -I/usr/include/mysql -std=c++11
LFLAGS = -L/usr/lib/mysql -lmysqlclient 

all: mainWine

mainWine: parse.o wine.o dbconnect.o printMeFirst.o mainWine.o
	$(CC) parse.o wine.o dbconnect.o printMeFirst.o mainWine.o -o mainWine $(LFLAGS)

mainWine.o: mainWine.cpp
	$(CC) $(CFLAGS) mainWine.cpp

parse.o: parse.cpp parse.h
	$(CC) $(CFLAGS) parse.cpp

wine.o: wine.cpp wine.h
	$(CC) $(CFLAGS) wine.cpp

dbconnect.o: dbconnect.cpp dbconnect.h
	$(CC) $(CFLAGS) dbconnect.cpp

printMeFirst.o: printMeFirst.cpp  
	$(CC) $(CFLAGS) printMeFirst.cpp

clean:
	rm *.o mainWine

run:
	./mainWine "select * from wineInfo"
