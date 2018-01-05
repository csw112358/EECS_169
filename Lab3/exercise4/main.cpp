/* File Name: main.cpp
Author: Chris Watkins 
Assignment: EECS-169 Lab3 exercise3
Description: This program will display a sequence of Fibonacci numbers 
Date: 22/9/16
*/

#include<iostream>
using namespace std;
int main()
{
	int amountNum;
	int fib1 = 0;
	int fib2 = 1;
	int totalNum = 0;
	int fibnew = 0;
	cout<< "How many Fibonacci numbers would you like to see?";
	cin>> amountNum;
	cout<< "Here is your fibonacci sequence: \n";	
		for(int fibnew=0; fibnew < amountNum ; fibnew= fibnew+1)
		{
			if (fibnew <= 1)
			{
				cout << fibnew << endl;
		}
		else
		{
			totalNum = fib1+fib2;
			fib1=fib2;
			fib2 = totalNum;
			cout << totalNum <<endl;
		}
	}
return(0);
}
		

		
