//Author: Chris Watkins
//Assignment: EECS-169 Lab8
//Description: This program will create a class (Circle) and do several functions.
//Date: 11/3/16

#include <iostream>
using namespace std;

class Circle
{
private:
  double radius;
public:
  double diameter();
  double area();
  double circumference();
  double getRadius();
  void setRadius(double radius);
};

void Circle::setRadius(double newRadius)
{
  radius=newRadius;
}

double Circle::diameter()
{
  double diameter=radius*2;
  return(diameter);
}

double Circle::area()
{
  double area;
  area=(3.14159*radius*radius);
  return(area);
}

double Circle::circumference()
{
  double circumference= (3.14159*2*radius);
  return(circumference);
}

double Circle::getRadius()
{
  return(radius);
}
