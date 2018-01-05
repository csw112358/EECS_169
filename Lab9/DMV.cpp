//Author: Chris Watkins
//Assignment: EECS-169 Lab9
//Description: This program will specify member functions of class DMV.
//Date: 11/13/16

#include "DMV.h"
using namespace std;

DMV::DMV(string fileName)
{
  record = new DriversLicenseRecord(fileName);
}

DMV::~DMV()
{
  delete record;
}

void DMV::printMenu()
{
  std::cout<<"Select an option:\n"
           <<"1) Print all Drivers Info\n"
           <<"2) Print specific driver\n"
           <<"3) Create registered voter file\n"
           <<"4) Print in ascending order in age range\n"
           <<"5) Quit\n"
           <<"Enter your choice: ";
}

void DMV::run()
{
  int choice = 0;

  do
  {
    printMenu();
    cin>>choice;
    if(choice == 1)
    {
      record->printAllInfo();
    }
    else if(choice == 2)
    {
      cout<<"Enter a drivers license number:\n";
      int tempNum;
      cin>>tempNum;
      record->printDriver(tempNum);
    }
    else if(choice == 3)
    {
      string fileName;
      cout<<"Enter a file name to create a record in:\n";
      cin>>fileName;
      record->createVoterFile(fileName);
    }
    else if(choice == 4)
    {
      int min;
      int max;
      cout<<"Enter a minumum value for ages:\n";
      cin>>min;
      cout<<"Enter a maximum value for ages:\n";
      cin>>max;
      record->printAscendingAges(min,max);
    }
  }while (choice!=5);
}
