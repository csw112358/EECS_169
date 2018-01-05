//Author: Chris Watkins
//Assignment: EECS-169 Lab8 exercise2
//Description: This program will create a class (KUStudent) and do several functions.
//Date: 11/3/16

#include <iostream>
#include<string>
using namespace std;

class KUStudent
{
private:
  string firstName;
  string lastName;
  string id;
  string department;
public:
  void setName(string fname, string lname);
  void setKUInfo(string kuid, string dpt);
  string getFirstName();
  string getLastName();
  string getID();
  string getDept();
};

void KUStudent::setName(string fname, string lname)
{
  firstName=fname;
  lastName=lname;
}

void KUStudent::setKUInfo(string kuid, string dpt)
{
  id=kuid;
  department=dpt;
}

string KUStudent::getFirstName()
{
  return(firstName);
}
string KUStudent::getLastName()
{
  return(lastName);
}
string KUStudent::getDept()
{
  return(department);
}
string KUStudent::getID()
{
  return(id);
}
