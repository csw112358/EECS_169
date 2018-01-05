/* File Name: main.cpp
* Author: Chris Watkins 
* Assignment: EECS-169 Lab3 exercise1
* Description: This program will allow the user to control the start/end points of loop printing subsequent
* integers.
* Date: 20/9/16
*/

#include<iostream>
using namespace std;
int main ()
{
	int start, end;

	cout<< "Input a starting value (included): ";
	cin>> start;
	cout<< "Input an ending value (excluded): ";
	cin>> end;
	if(start<end)
	{
		for(int x=start; x<end; x=x+1)
		{
			cout<< x << endl;
		}
	}
	else
	{
		cout<< "Error: invalid input\n";
	}
	return(0);
}
