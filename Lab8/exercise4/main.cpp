//Author: Chris Watkins
//Assignment: EECS-169 Lab8 exercise4
//Description: This program will implement the newly created FileCopier class.
//Date: 11/7/16

#include <iostream>
#include<string>
#include"FileCopier.h"
#include <fstream>
#include <limits>
using namespace std;

int main()
{
  FileCopier myFileCopier;

  string fileName;
  string copyName;


  cout<<"Input a file name: ";
  cin>>fileName;
  cout<<"Input the file name of the place you want to copy to: ";
  cin>>copyName;

  char exitloop='n';
  while(exitloop=='n')
  {
    int choice=0;
    cout<<"Here are you options: \n"
        <<"1) Append \n"
        <<"2) Remove \n"
        <<"3) Save Copy to file \n";
    cin>>choice;

    if(choice==1)
    {
      myFileCopier.FileCopier(fileName, copyName);
    }
    else if(choice==2)
    {
      string line;
      cout<<"Enter line to be added: ";
      getline(cin, line);
      myFileCopier.append(line);
    }
    else if(choice==3)
    {
      myFileCopier.save(copyName)
    }

    cout<<"Would you like to exit? (y/n)";
    cin>>exitloop;
  }

  delete[] array;

return(0);
}
