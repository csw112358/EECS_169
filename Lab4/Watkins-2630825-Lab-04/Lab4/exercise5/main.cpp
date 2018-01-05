//Author: Chris Watkins
//Assignment: EECS-169 Lab4 exercise5
//Description: This program will compute the factorial of a non-negative number.
//Date: 9/29/16

#include <iostream>
using namespace std;
int main()
{
  int number,factorial=1,y;

  cout<<"Enter the number to compute factorial: ";
  cin>>number;

  while(number<0)
  {
    cout<<"Please enter a non-negative number: ";
    cin>>number;
  }

  for(int x=1;x<=number;x++)
  {
    factorial=factorial*x;
  }

  cout<<"Result for " << number<< "!"<< " = " <<number;

  for(y=number-1;y<=number && y>0;y--)
  {
    cout<<"*"<<y;
  }

  cout<< " = "<< factorial<< endl;

return(0);
}
