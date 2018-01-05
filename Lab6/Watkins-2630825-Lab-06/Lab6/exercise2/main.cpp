//Author: Chris Watkins
//Assignment: EECS-169 Lab6 exercise2
//Description: This program will intake an array of strings/ display the longest
//and shortest strings.
//Date: 10/20/16

#include <iostream>
#include<string>
using namespace std;

string min(string arr[], int size)
{
  int i=0;
  string smallWord=arr[0];
  int min= (arr[i]).size();
  for(i; i<size; i++)
  {
    if((arr[i]).size()<min)
    {
      smallWord=arr[i];
    }
  }
  return(smallWord);
}

string max(string arr[], int size)
{
  int i=0;
  string longWord=arr[0];
  int max= (arr[i]).size();
  for(i; i<size; i++)
  {
    if((arr[i]).size()>max)
    {
      longWord=arr[i];
    }
  }
  return(longWord);
}

int main()
{
  int userSize;

  cout<<"Input an array size for your word array: ";
  cin>>userSize;
  while(userSize<1)
  {
    cout<<"Enter a positive integer for the array size: ";
    cin>>userSize;
  }

  string arr[userSize];
  cout<<"Now please enter "<<userSize<<" words:\n";

  for(int i=0; i<userSize;i++)
  {
    cout<<"Enter a word: ";
    cin>>arr[i];
  }

  cout<<"The shortest word is: "<<min(arr, userSize)<<endl;
  cout<<"The longest word is: "<<max(arr, userSize)<<endl;

  return(0);
}
