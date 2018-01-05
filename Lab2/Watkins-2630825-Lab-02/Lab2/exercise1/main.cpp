/* File Name:  main.cpp
 * Author: Chris Watkins 
 * Assignment:   EECS-168/169 Lab 2 exercise 1
 * Description:  This program will convert the input temperature from Fahrenheit to Celsius.
 * Date: 13.9.16
*/

#include <iostream>
using namespace std;
int main( )
{
	double tempf, tempc;
	
	cout<< "Enter the temperature in Fahrenheit\n";
	cin>> tempf; 
	
	tempc = ((tempf-32.0)*(5.0/9.0));
	
	cout<<tempf<< " degrees Fahrenheit = "<<tempc << " degrees Celsius.\n";
	
	return 0;
}

