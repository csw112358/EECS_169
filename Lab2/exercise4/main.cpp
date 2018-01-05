/* File Name:  main.cpp
 * Author: Chris Watkins 
 * Assignment: EECS-169 Lab 2 exercise4
 * Description: This program will solve for both roots of a quadratic equation given the input values (a,b,c) 
 * Date: 13.9.16
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double a = 0.0, b = 0.0, c = 0.0, root1 = 0.0, root2 = 0.0;
	
	cout<< "We will use the quadratic formula to solve for the roots\nof a quadratic equation in the form: ax*x+bx+c \n";
	cout<< "Input a value for a: \n";
	cin>> a;
	cout<< "Input a value for b: \n";
	cin>> b;
	cout<< "Input a value for c: \n";
	cin>> c;
	
	root1 = (-b + sqrt((b*b)-(4*a*c)) ) / (2*a);
	root2 = (-b - sqrt((b*b)-(4*a*c)) ) / (2*a);

	cout<< "Input a: " << a << "\n";
	cout<< "Input b: " << b << "\n";
	cout<< "Input c: " << c << "\n";	
	cout<< "Root 1: " << root1 << "\n";
	cout<< "Root 2: " << root2 << "\n";
	return(0);
}

	
