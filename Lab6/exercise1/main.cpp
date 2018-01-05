//Author: Chris Watkins
//Assignment: EECS-169 Lab6 exercise1
//Description: This program will recieve values for an array of user defined size and
//calculate several metrics about the data.
//Date: 10/20/16

#include <iostream>
using namespace std;

double sum(double arr[], int size)
{
  double Sum=0;
  for(int i=0; i<size; i++)
  {
    Sum=Sum+ arr[i];
  }
  return(Sum);
}

double avg(double arr[], int size)
{
  double Sum=0;
  for(int i=0; i<size; i++)
  {
    Sum=Sum+ arr[i];
  }
  double avg= Sum/size;
  return(avg);
}

double min(double arr[], int size)
{
  int i=0;
  double min= arr[i];
  for(i; i<size; i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  return(min);
}

double max(double arr[], int size)
{
  int i=0;
  double max= arr[i];
  for(i; i<size; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  return(max);
}

int main()
{
  int userSize=0;
  while(userSize<=0)
  {
    cout<<"How many numbers would you like to store? ";
    cin>>userSize;
    if(userSize<=0)
    {
      cout<<"You must enter a positive integer.\n";
    }
  }

  double arr[userSize];
  cout<<"Now please enter "<<userSize<<" numbers:\n";

  for(int i=0; i<userSize;i++)
  {
    cout<<"Enter a number into your array: ";
    cin>>arr[i];
  }

  cout<<"The numbers in your array are:\n";
  for(int i=0; i<userSize;i++)
  {
    cout<<arr[i]<<endl;
  }

  cout<<"The sum of the values is: "<<sum(arr, userSize)<<endl;
  cout<<"The average of the values is: "<<avg(arr, userSize)<<endl;
  cout<<"The minimum value is "<<min(arr,userSize)<<endl;
  cout<<"The maximum value is "<<max(arr,userSize)<<endl;

return(0);
}
