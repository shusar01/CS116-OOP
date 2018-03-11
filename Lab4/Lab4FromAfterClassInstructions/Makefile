#
#
CC=g++
#
CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient
LFLAGS =  

all: bankmain

bankmain: bankmain.o account.o printMeFirst.o transfer.o
	$(CC) bankmain.o account.o printMeFirst.o transfer.o -o bankmain $(LFLAGS)

bankmain.o: bankmain.cpp
	$(CC) $(CFLAGS) bankmain.cpp

account.o: account.cpp account.h
	$(CC) $(CFLAGS) account.cpp

printMeFirst.o: printMeFirst.cpp  
	$(CC) $(CFLAGS) printMeFirst.cpp

transfer.o: transfer.cpp  
	$(CC) $(CFLAGS) transfer.cpp

clean:
	rm *.o bankmain

run:
	./bankmain  
