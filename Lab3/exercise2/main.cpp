/* File Name: main.cpp
* Author: Chris Watkins 
* Assignment: EECS-169 Lab3 exercise2
* Description: This program will print the multiples of a number for a user.
* Date: 20/9/16
*/

#include<iostream> 
using namespace std;
int main()
{
	int number, numMultiples, x, y;	

	cout<< "Input number you would you like to see the multiples of: ";
	cin>> number;
	cout<< "Input the amount of multiples you would like to see: ";
	cin>> numMultiples;
	
	if(numMultiples <= 0)
	{
		cout<< "Error.";
	}
	else
	{
		for(x=1; x <= numMultiples; x = x+1)
		{
			y = number*x;
			cout<< y << endl;
		}
	}
	return(0);
}
