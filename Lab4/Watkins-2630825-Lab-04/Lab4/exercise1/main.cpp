//Author: Chris Watkins
//Assignment: EECS-169 Lab4 exercise1
//Description: This program will compute the sum of multiples of the users choosing
//Date: 9/29/16

#include <iostream>
using namespace std;
int main()
{
  int multiple = 0;
  int endvalue = 0;
  int sum = 0;
  int oldsum=0;
  int x=1;
  int newNum=0;
  int nextNum=5;

  cout<< "Please input a multiple larger than 1:";
  cin>> multiple;
  cout<< "Please enter a positive integer as the end value:";
  cin>> endvalue;

  if(multiple>=1 && endvalue>=1)
    {
      while(nextNum<=endvalue)
      {
        oldsum=sum;
        newNum=(multiple*x);
        sum=(newNum+oldsum);
        x++;
        nextNum=newNum+5;
      }
      cout<< "The summaiton is: " <<sum<< endl;
    }
    else
    {
      cout<< "Error";
    }
return(0);
}
