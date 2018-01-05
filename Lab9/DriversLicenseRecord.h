//Author: Chris Watkins
//Assignment: EECS-169 Lab9
//Description: This program will create a class (DriversLicenseRecord.h).
//Date: 11/13/16
#ifndef DRIVERSLICENSERECORD_H
#define DRIVERSLICENSERECORD_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class DriversLicenseRecord
{
public:
  DriversLicenseRecord(string fileName);
  ~DriversLicenseRecord();
  void printAllInfo();
  void printDriver(int licenseNum);
  void createVoterFile(string fileName);
  void printAscendingAges(int min, int max);

private:
  struct voter{
    string firstName;
    string lastName;
    int age;
    char registrationStatus;
    int licenseNumber;
  };

  int checkDriverExists(int licenseNum);
  void sortByAges(vector<voter> &list);
  voter* allVoters;
  int numEntries;

};
#endif
