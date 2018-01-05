exercise1: main.o DMV.o DriversLicenseRecord.o
	g++ -g -Wall -std=c++11 -o exercise1 main.o DMV.o DriversLicenseRecord.o

main.o: main.cpp DMV.h
	g++ -g -Wall -std=c++11 -c main.cpp

DMV.o: DMV.cpp DMV.h DriversLicenseRecord.h
	g++ -g -Wall -std=c++11 -c DMV.cpp

DriversLicenseRecord.o: DriversLicenseRecord.cpp DriversLicenseRecord.h
	g++ -g -std=c++11 -c DriversLicenseRecord.cpp

clean:
	rm *.o exercise1
