all: zadatak1

zadatak1: zadatak1.o allCaps.o sortLeters.o noNumbers.o palindromCheck.o
	gcc -o zadatak1 zadatak1.o allCaps.o sortLeters.o noNumbers.o palindromCheck.o
zadatak1.o: functions.h zadatak1.c
	gcc -c zadatak1.c
allCaps.o: functions.h allCaps.c
	gcc -c allCaps.c
sortLeters.o: functions.h sortLeters.c
	gcc -c sortLeters.c
noNumbers.o: functions.h noNumbers.c
	gcc -c noNumbers.c
palindromCheck.o: functions.h palindromCheck.c
	gcc -c palindromCheck.c
