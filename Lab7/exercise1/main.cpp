//Author: Chris Watkins
//Assignment: EECS-169 Lab7 exercise1 (pt 1&2)
//Description: This program will create a 2D array and run several helper functions.
//It will also transpose an array of NxN size.
//Date: 10/27/16

#include <iostream>
using namespace std;

void print2DArray(double** array, int rows, int cols)
{
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      cout<<array[i][j];
      if(j<cols-1)
      {
        cout<<",";
      }
    }
    cout<<endl;
  }
}

int arraySum(double* array, int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
  {
    sum = sum + array[i];
  }
  return(sum);
}

double arrayAvg(double* array, int size)
{
  double avg=0;
  double sum=0;
  for(int i=0;i<size;i++)
  {
    sum = sum + array[i];
  }
  avg=sum/size;
  return(avg);
}

double arraySum2D(double** array, int rows, int cols)
{
  double sum =0;
  for(int i=0;i<rows;i++)
  {
    double rowSum=0;
    for(int j=0;j<cols;j++)
    {
      rowSum = rowSum + array[i][j];
    }
    sum= sum+rowSum;
  }
  return(sum);
}

double arrayAvg2D(double** array, int rows, int cols)
{
  double sum =0;
  double avg=0;
  for(int i=0;i<rows;i++)
  {
    double rowSum=0;
    for(int j=0;j<cols;j++)
    {
      rowSum = rowSum + array[i][j];
    }
    sum= sum+rowSum;
  }
  avg= sum/(rows*cols);
  return(avg);
}

double arrayMax2D(double** array, int rows, int cols)
{
  double max=array[0][0];
  for(int i=0;i<rows;i++)
  {
    double rowMax= array[i][0];
    for(int j=0;j<cols;j++)
    {
      if(array[i][j]>rowMax)
      {
        rowMax=array[i][j];
      }
    }
    if(rowMax>max)
    {
      max=rowMax;
    }
  }
  return(max);
}


double** transpose(double** oldArray, int rows, int cols)
{
  double** newArray = new double*[rows];
  for(int i=0; i<rows;i++)
  {
    newArray[i]= new double[cols];
  }
  for(int r=0;r<rows;r++)
  {
    for(int c=0;c<cols;c++)
    {
      newArray[r][c]=oldArray[c][r];
    }
  }
  return(newArray);
}


int main()
{
  int numRows;
  int numCols;

  cout<<"Let's make a 2-dimensional array grid.\n";
  cout<<"How many rows?: ";
  cin>>numRows;
  cout<<"How many columns?: ";
  cin>>numCols;

  double** myGrid = new double*[numRows];

  for(int i=0; i<numRows;i++)
  {
    myGrid[i]= new double[numCols];
  }

  for(int i=0;i<numRows;i++)
  {
    for(int j=0;j<numCols;j++)
    {
      cout<<"Enter a value for position ("<<i<<","<<j<<"): ";
      cin>>myGrid[i][j];
    }
  }

  print2DArray(myGrid, numRows, numCols);

  for(int i=0; i<numRows;i++)
  {
    cout<<"Row "<<i<<" sum= "<<arraySum(myGrid[i], numRows);
    cout<<endl;
  }
  for(int i=0; i<numRows;i++)
  {
    cout<<"Row "<<i<<" avg= "<<arrayAvg(myGrid[i], numRows);
    cout<<endl;
  }

  cout<<"The sum for the entire array is: "<<arraySum2D(myGrid, numRows, numCols)<<endl;
  cout<<"The average for the entire array is: "<<arrayAvg2D(myGrid, numRows, numCols)<<endl;
  cout<<"The largest value in the array is: "<<arrayMax2D(myGrid, numRows, numCols)<<endl;

  if(numRows==numCols)
  {
    double** newArray = transpose(myGrid, numRows, numCols);
    cout<<"The transposed array: \n";
    print2DArray(newArray, numRows, numCols);

    for(int i=0;i<numRows;i++)
    {
      delete[] newArray[i];
    }
    delete newArray;
  }
  else
  {
    cout<<"Cannot transpose this array.\n";
  }


  for(int i=0;i<numRows;i++)
  {
    delete[] myGrid[i]; //deletes the array of doubles
  }
  delete myGrid; //deletes the array of pointers

  return(0);
}
