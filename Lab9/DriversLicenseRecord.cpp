//Author: Chris Watkins
//Assignment: EECS-169 Lab9
//Description: This program will define the functions
//for the class (DriversLicenseRecord.h).
//Date: 11/13/16
#include "DriversLicenseRecord.h"
using namespace std;

DriversLicenseRecord::DriversLicenseRecord(string fileName)
{
  ifstream fileIn(fileName);
  fileIn>>numEntries;
  allVoters = new voter[numEntries];

  for(int i=0; i<numEntries; i++)
  {
    voter newVoter;
    fileIn >> newVoter.firstName;
    fileIn >> newVoter.lastName;
    fileIn >> newVoter.age;
    fileIn >> newVoter.registrationStatus;
    fileIn >> newVoter.licenseNumber;

    allVoters[i] = newVoter;
  }
  fileIn.close();
}

DriversLicenseRecord::~DriversLicenseRecord()
{
  delete[] allVoters;
}

void DriversLicenseRecord::printAllInfo()
{
  for(int i=0; i<numEntries; i++)
  {
    string curLast = allVoters[i].lastName;
    string curFirst = allVoters[i].firstName;
    int curAge = allVoters[i].age;
    int curNum = allVoters[i].licenseNumber;
    cout<< curLast << ", " << curFirst << " (" << curAge << ") " << curNum << "\n";
  }
  std::cout<<"\n";
}

void DriversLicenseRecord::printDriver(int licenseNum)
{
  int i = checkDriverExists(licenseNum);
  if (i < 0)
  {
    cout<<"No record was found for that license number\n";
  }
  else
  {
    string curLast = allVoters[i].lastName;
    string curFirst = allVoters[i].firstName;
    int curAge = allVoters[i].age;
    int curNum = allVoters[i].licenseNumber;
    cout<< curLast << ", " << curFirst << " (" << curAge << ") " << curNum << "\n";
  }
}

void DriversLicenseRecord::createVoterFile(string fileName)
{
  ofstream fileOut(fileName);
  for(int i=0; i<numEntries; i++)
  {
    if(allVoters[i].registrationStatus == 'Y')
    {
      fileOut << allVoters[i].firstName << " ";
      fileOut << allVoters[i].lastName << " ";
      fileOut << allVoters[i].age << " ";
      fileOut << allVoters[i].registrationStatus << " ";
      fileOut << allVoters[i].licenseNumber << "\n";
    }
  }
  fileOut.close();
}

int DriversLicenseRecord::checkDriverExists(int licenseNum)
{
  for(int i=0; i<numEntries; i++)
  {
    if(allVoters[i].licenseNumber == licenseNum)
    {
      return i;
    }
  }
  return -1;
}


void DriversLicenseRecord::printAscendingAges(int min, int max)
{
  int size = 0;
  for(int i=0; i<numEntries; i++)
  {
    if(allVoters[i].age >= min && allVoters[i].age <= max)
    {
      size++;
    }
  }
  if(size == 0)
  {
    std::cout<<"\nNo voters were within that age range\n\n";
    return;
  }
  else
  {
    vector<voter> voterList;

    for(int i=0; i<numEntries; i++)
    {
      if(allVoters[i].age >= min && allVoters[i].age <= max)
      {
        voterList.push_back(allVoters[i]);
      }
    }
    sortByAges(voterList);

    for(int i=0; i<voterList.size(); i++)
    {
      string curLast = voterList[i].lastName;
      string curFirst = voterList[i].firstName;
      int curAge = voterList[i].age;
      int curNum = voterList[i].licenseNumber;
      cout<< curLast << ", " << curFirst << " (" << curAge << ") " << curNum << "\n";
    }
  }
}

void DriversLicenseRecord::sortByAges(vector<voter> &list)
{
  voter temp;
  for(int i=0; i<list.size()-1; i++)
  {
    for(int j=0; j<list.size()-1; j++)
    {
      if(list[j].age > list[j+1].age)
      {
        temp = list[j+1];
        list[j+1] = list[j];
        list[j] = temp;
      }
    }
  }
}
