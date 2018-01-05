//Author: Chris Watkins
//Assignment: EECS-169 Lab8 exercise2
//Description: This program will implement the newly created Animal and OldMacDonald class.
//Date: 11/3/16

#include <iostream>
#include<string>
#include"Animal.h"
#include"OldMacDonald.h"
using namespace std;

int main()
{
  string inputAnimal;
  string inputSound;
  Animal myAnimal;
  OldMacDonald myOldMacDonald;

  cout<<"Enter an animal: ";
  cin>>inputAnimal;
  cout<<"What sound does a "<<inputAnimal<<" make?: ";
  cin>>inputSound;

  myAnimal.setType(inputAnimal);
  myAnimal.setSound(inputSound);

  myOldMacDonald.setAnimal(myAnimal);

  myOldMacDonald.sing(myAnimal);


  return(0);
}
