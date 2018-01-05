/* File Name: main.cpp
Author: Chris Watkins 
Assignment: EECS-169 Lab3 exercise3
Description: This program allow the user to see the ASCII representation of a specific number they want or *to see all the ASCII conversions from 0 to 255
Date: 20/9/16
*/

#include<iostream>
using namespace std;
int main()
{
	char exitloop= 'n';
	while (exitloop=='n')	
	{
		int choice;	
		int value;

		cout<< "1) Select a specific number\n";
		cout<< "2) Display visible ASCII values (33 to 126)\n";
		cout<< "3) Exit\n";
		cin>> choice;

		switch(choice)
		{
			case 1:
				cout<< "Enter value: ";
				cin>> value;
				cout<< (char)value << endl;
				break;
			case 2:
				for(int x=0; x<= 255; x=x+1)
				{
					cout<< x << "=" << (char)x << endl;
				}
				break;
			case 3:
				cout<< "goodbye";
				break;
		}
		cout<< "Do you want to exit? (y/n) \n";
		cin>> exitloop;
	}
return(0);

}
