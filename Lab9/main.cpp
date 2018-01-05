//Author: Chris Watkins
//Assignment: EECS-169 Lab9
//Description: This program will run the classes/functions we have created.
//Date: 11/13/16
#include"DMV.h"
#include"DriversLicenseRecord.h"
#include<fstream>
using namespace std;

int main(int argc, char** argv)
{

  if(argc<2)
  {
    cout<<"You didn't specify an input file name! please try again\n";
    return 0;
  }

  string fileName = argv[1];
  ifstream fileIn;
  fileIn.open(fileName.c_str());
  if(!fileIn.is_open())
  {
    std::cout<<"The file did not exist! please try again\n";
  }

  fileIn.close();
  DMV myDMV(fileName);
  myDMV.run();

  return 0;
}
