//Author: Chris Watkins
//Assignment: EECS-169 Lab4 exercise4
//Description: This program will make a pyramid of asterisks of size n.
//Date: 9/29/16

#include <iostream>
using namespace std;
int main()
{
  int baseNum=0;
  int rows=0;
  int stars=0;

  cout<<"Enter the number of asterisks for the base of the triangle: ";
  cin>> baseNum;

  for(rows=0;rows<baseNum;rows++)
  {
    for(stars=0;stars<=rows;stars++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }

return(0);
}
