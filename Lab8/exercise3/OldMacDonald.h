//Author: Chris Watkins
//Assignment: EECS-169 Lab8
//Description: This program will create a class (OldMacDonald) and do several functions.
//Date: 11/3/16

#include <iostream>
#include<string>
using namespace std;

class OldMacDonald
{
private:
  Animal userAnimal;
public:
  void setAnimal(Animal animal);
  Animal getAnimal();
  void sing(Animal animal);
};

void OldMacDonald::setAnimal(Animal animal)
{
  userAnimal=animal;
}

Animal OldMacDonald::getAnimal()
{
  return(userAnimal);
}

void OldMacDonald::sing(Animal userAnimal)
{
  cout<<"Let's sing!\n"
      <<"Old MacDonald had a farm, EE-I-EE-I-O\n"
      <<"And on the farm he had a "<<userAnimal.getType()<<" EE-I-EE-I-O\n"
      <<"With a "<<userAnimal.getSound()<<"-"<<userAnimal.getSound()
      <<" here, and a "<<userAnimal.getSound()<<"-"<<userAnimal.getSound()<<" there,\n"
      <<"Here a "<<userAnimal.getSound()<<", there a "<<userAnimal.getSound()
      <<", everywhere a "<<userAnimal.getSound()<<"-"<<userAnimal.getSound()<<",\n"
      <<"Old MacDonald had a farm, EE-I-EE-I-O"<<endl;
}
