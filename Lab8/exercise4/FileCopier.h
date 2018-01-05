//Author: Chris Watkins
//Assignment: EECS-169 Lab8
//Description: This program will create a class (FileCopier) and do several functions.
//Date: 11/7/16

#include <iostream>
#include<string>
#include <fstream>
#include <limits>
using namespace std;

class FileCopier
{
private:
  string originalFile;
  string copyFile;


public:
  FileCopier(string original, string copy);
  void append(string line);
  bool remove(int lineNumber);
  void save(string outFile);

};


FileCopier::FileCopier(string original, string copy)
{
  originalFile=original;
  copyFile=copy;

  ifstream inFile; //make an input file stream object
  inFile.open(originalFile); //open the file

  int number_of_lines = 0;
  string line;

  while (getline(originalFile, line))
  {
     ++number_of_lines;
     return(0);
  }

  string *array= new string[number_of_lines];

  int i=0;
  while (getline(originalFile, line))
  {
    line>> array[i];
    i++;
  }
  inFile.close();
}

void FileCopier::append(string line);
{

  string *newArray = new string[number_of_lines];
     copy(array, array + min(number_of_lines, number_of_lines+1), newArray);
     delete[] array;
     array = newArr;
  array[number_of_lines]=line;

}

bool FileCopier::remove(int lineNumber)
{
  if(lineNumber<0 || lineNumber>number_of_lines)
  {
    return(false);
  }
  else
  {
    return(true);
  }

  if(true)
  {
    array[lineNumber-1]="";
  }
}

void FileCopier::save(string copyFile)
{
  ofstream outFile;
  outFile.open(copyFile);

  for(int i=0;i<number_of_lines;i++)
  {
    outFile<<array[i]<<endl;
  }
  outFile.close();
}
