/*
TITLE: Chapter 4 Exercise 15 - Shipping Charges
FILE NAME: Chapter4Ex15_DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 10/3/2024
REQUIREMENTS: Write a program that asks for the weight of the package and the distance it is to be shipped, 
then displays the charges.

Rates:
Weight (kg) | Rate per 500 miles shipped:
* less than or equal to 2g = $1.10
* greater than 2g, less than or equal to 6g = $2.20
* greater than 6g, less than or equal to 10g = $3.70
* greater than 10g, less than or equal to 20g = $4.80


Input Validation: 
* Do not accept values of 0 or less for the weight of the package. 
* Do not accept weights of more than 20 kg (this is the maximum weight the company will ship). 
* Do not accept distances of less than 10 miles or more than 3,000 miles. 
	( These are the company’s minimum and maximum shipping distances )
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int weight = 0;
	double distance = 0;

	cout << "Enter the weight of the package in kilograms: " << endl;
	cin >> weight; 
	cout << endl;

	switch (weight)
	{
	case 1:

	}
	return 0;
}