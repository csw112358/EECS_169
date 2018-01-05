/* File Name:  main.cpp
 * Author: Chris Watkins 
 * Assignment:   EECS-168/169 Lab 2 exercise 2
 * Description:  This program will solve for the hypotenuse of a right triangle
 * Date: 13.9.16
*/

#include<iostream>
#include <math.h>
using namespace std;
int main( )
{
	double answer = 0.0, a = 0.0, b = 0.0;
	cout << "Will use the formula a^2 + b^2 = c^2 to solve for the hypotenuse of a triangle.\n";
	cout << "Input a value for a: \n";
	cin >> a;
	cout << "Input a value for b: \n";
	cin >> b;
	answer = sqrt((a*a)+(b*b));
	cout << "Hypotenuse = " << answer << "\n";
	return 0;
}

