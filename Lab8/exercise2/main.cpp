//Author: Chris Watkins
//Assignment: EECS-169 Lab8 exercise2
//Description: This program will implement the newly created KUStudent class.
//Date: 11/3/16

#include <iostream>
#include<string>
#include"KUStudent.h"
using namespace std;

void writeOutput(KUStudent KUstudent1)
{
  cout<<"Student: "<< KUstudent1.getFirstName()<<" "<<KUstudent1.getLastName()<<endl;
  cout<<"KUID: "<< KUstudent1.getID()<<endl;
  cout<<"Department: "<< KUstudent1.getDept()<<endl;
}

int main()
{
  KUStudent KUstudent1;
  string fname;
  string lname;
  string stuID;
  string stuDpt;

  cout<<"Please input the student's name (firstname lastname): ";
  cin>>fname;
  cin>>lname;
  KUstudent1.setName(fname, lname);

  cout<<"Please input the student's KUID and department: ";
  cin>>stuID;
  cin>>stuDpt;
  KUstudent1.setKUInfo(stuID, stuDpt);

  writeOutput(KUstudent1);
  
  return(0);
}
