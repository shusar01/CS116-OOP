#
#
CC=g++
#
CFLAGS = -c -Wall -I/usr/include/mysql -std=c++11
#LFLAGS = -L/usr/lib/mysql -lmysqlclient
LFLAGS =  

all: read_csv_file

read_csv_file: read_csv_file.o  parse.o printMeFirst.o wine.o address.o menuWine.o choice1.o choice2.o choice3.o choice4.o choice5.o choice6.o
	$(CC) read_csv_file.o  parse.o printMeFirst.o wine.o address.o menuWine.o choice1.o choice2.o choice3.o choice4.o choice5.o choice6.o -o read_csv_file $(LFLAGS)

read_csv_file.o: read_csv_file.cpp
	$(CC) $(CFLAGS) read_csv_file.cpp

parse.o: parse.cpp parse.h
	$(CC) $(CFLAGS) parse.cpp

printMeFirst.o: printMeFirst.cpp  
	$(CC) $(CFLAGS) printMeFirst.cpp

wine.o: wine.cpp wine.h
	$(CC) $(CFLAGS) wine.cpp

address.o: address.cpp address.h
	$(CC) $(CFLAGS) address.cpp

menuWine.o: menuWine.cpp menuWine.h
	$(CC) $(CFLAGS) menuWine.cpp	

choice1.o: choice1.cpp
	$(CC) $(CFLAGS) choice1.cpp

choice2.o: choice2.cpp
	$(CC) $(CFLAGS) choice2.cpp

choice3.o: choice3.cpp
	$(CC) $(CFLAGS) choice3.cpp

choice4.o: choice4.cpp
	$(CC) $(CFLAGS) choice4.cpp

choice5.o: choice5.cpp
	$(CC) $(CFLAGS) choice5.cpp

choice6.o: choice6.cpp
	$(CC) $(CFLAGS) choice6.cpp

clean:
	rm *.o read_csv_file

run:
	./read_csv_file  
