/* File Name:  main.cpp
 * Author: Chris Watkins 
 * Assignment:   EECS-169 Lab 2 exercise 3
 * Description:  This program will tell you which color of light corresponds from a user given wavelength.
 * Date: 13.9.16
*/
#include <iostream>
using namespace std;
int main()
{
	double wavelength;
	
	cout << "Enter a wavelength in nm: \n";
	cin >> wavelength;
	

	if(wavelength<380 || wavelength>=750)
	{
		cout << "The entered wavelegnth is not part of the visible spectrum.\n";
	}
	else if(380<=wavelength && wavelength<450)
	{
		cout << "The color is Violet.\n";
	}
	else if(450<=wavelength && wavelength<495)
	{
		cout<<"The color is Blue.\n";
	}
	else if(495<=wavelength && wavelength<570)
	{
		cout<<"The color is Green.\n";
	}
	else if(570<=wavelength && wavelength<590)
	{
		cout<<"The color is Yellow.\n";
	}
	else if(590<=wavelength && wavelength<620)
	{
		cout<<"The color is Orange.\n";
	}
	else if(620<=wavelength && wavelength<750)
	{
		cout<<"The color is Red.\n";
	}
	return(0);
}
