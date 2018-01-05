//Author: Chris Watkins
//Assignment: EECS-169 Lab6 exercise3
//Description: This program will do many things! (Big array problem)
//Date: 10/20/16

#include <iostream>
using namespace std;


void printArray(double arr[], int size)
{
  cout<<"[";
  for(int i=0; i<size-1;i++)
  {
    cout<<arr[i]<<", ";
  }
  cout<<arr[size-1]<<"]\n";
}

double* arrayResize(double oldArray[], int oldSize, int newSize)
{
  double* newArray=new double[newSize];

  for(int i=0;i<oldSize;i++)
  {
    newArray[i]=oldArray[i];
  }
  for(int i=oldSize;i<newSize;i++)
  {
    newArray[i]=0.0;
  }
  return newArray;
}

int count(double arr[], int size, double value)
{
  int count=0;
  for(int i=0; i<size; i++)
  {
    if(arr[i]==value)
    {
      count= count+1;
    }
  }
  return(count);
}

void reverse(double arr[], int size)
{
  double* temp=new double[size];
  for(int i=0; i<size;i++)
  {
    temp[i]= arr[i];
  }
  for(int i=0;i<size;i++)
  {
    arr[i]=temp[size-(i+1)];
  }
}

void normalize(double arr[], int size)
{
  int max= arr[0];
  int min= arr[0];
  for(int i=0; i<size; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
    if(arr[i]<min)
    {
      min=arr[i];
    }
  }
  for(int j=0; j<size;j++)
  {
    if(arr[j]==max)
    {
      arr[j]=1;
    }
    else if(arr[j]==min)
    {
      arr[j]=0;
    }
    else
    {
      arr[j]=((arr[j] - min) / (max - min) );
    }
  }
}

void sortArray(double arr[], int userSize)
{
  double temp;
  for(int i=0;i<userSize;i++)
  {
      for(int j=0;j<userSize;j++)
      {
        if(arr[i]>arr[j])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
  }
}


int main()
{

  int userSize;
  do
  {
    cout<<"How many numbers would you like to store? ";
    cin>>userSize;
    if(userSize<1)
    {
      cout<<"Size must be a positive integer.\n";
    }
  }while(userSize<1);

  double* arr=new double[userSize];

  for(int i=0; i<userSize;i++)
  {
    cout<<"Enter a number into your array: ";
    cin>>arr[i];
  }

  cout<<"Here are all the numbers in your array: (sorted)\n";
  sortArray(arr, userSize);
  printArray(arr, userSize);


  int userSize2;
  do
  {
    cout<<"Enter a new array size: ";
    cin>>userSize2;
    if(userSize2<userSize)
    {
      cout<<"Size must be a larger than previous size.\n";
    }
  }while(userSize2<userSize);


  double* newArray=arrayResize(arr, userSize, userSize2);

  cout<<"You need to add "<<userSize2-userSize<<" values.\n";

  for(int i =userSize; i<userSize2;i++)
  {
    cout<<"Enter number: ";
    cin>> newArray[i];

  }
  cout<<"Here are all the numbers in your array: (sorted)\n";
  sortArray(newArray, userSize2);
  printArray(newArray, userSize2);

  delete[] arr;

  double value;
  cout<<"Enter a value to count: ";
  cin>>value;

  cout<<value<<" Occurs "<<count(newArray, userSize2, value)<<" times in the array.\n";

  reverse(newArray, userSize2);

  cout<<"The array is now reversed:\n";
  printArray(newArray, userSize2);

  
  normalize(newArray, userSize2);
  cout<<"Array is now normalized:\n";
  printArray(newArray, userSize2);

  delete[] newArray;
  return(0);
}
