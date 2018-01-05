//Author: Chris Watkins
//Assignment: EECS-169 Lab8
//Description: This program will create a class (Circle) and do several functions.
//Date: 11/3/16

#include <iostream>
#include<string>
using namespace std;

class Animal
{
private:
  string type;
  string sound;
public:
  void setType(string userAnimal);
  void setSound(string userSound);
  string getType();
  string getSound();
};

void Animal::setType(string userAnimal)
{
  type=userAnimal;
}
void Animal::setSound(string userSound)
{
  sound=userSound;
}
string Animal::getType()
{
  return(type);
}
string Animal::getSound()
{
  return(sound);
}
