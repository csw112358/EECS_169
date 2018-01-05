//Author: Chris Watkins
//Assignment: EECS-169 Lab8
//Description: This program will implement the newly created Circle class.
//Date: 11/3/16

#include <iostream>
#include"Circle.h"
using namespace std;


int main()
{
  Circle myCircle;
  double myRadius;

  cout<<"Enter a radius for the circle: ";
  cin>> myRadius;
  myCircle.setRadius(myRadius);
  cout<<"My circle has a radius of: "<<myCircle.getRadius()<<endl;
  cout<<"The area is: "<<myCircle.area()<<endl;
  cout<<"The circumference is: "<<myCircle.circumference()<<endl;
  cout<<"The diameter is: "<<myCircle.diameter()<<endl;

  return(0);
}
