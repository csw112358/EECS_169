//Author: Chris Watkins
//Assignment: EECS-169 Lab9
//Description: This program will create a class (DMV).
//Date: 11/13/16
#include "DriversLicenseRecord.h"
#ifndef DMV_H
#define DMV_H
using namespace std;

class DMV
{
  public:
    DMV(string fileName);
    ~DMV();
    void run();

  private:
    DriversLicenseRecord* record;
    void printMenu();
};

#endif
