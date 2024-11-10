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
	// defining variables
	int weight;
	int distance;
	double ratePer500Miles = 0;
	double distanceIntervals;
	double shippingCost;

	// user inputs weight
	cout << "Enter the weight of the package in kilograms: ";
	cin >> weight; 
	cout << endl;

	// calculating shipping rate based on weight
	if (weight > 20)
	{
		cout << "We do not accept packages that have a weight greater than 20 kg.";
		return 0;
	}
	else if (weight <= 0)
	{
		cout << "The weight you entered is invalid.";
		return 0;
	}
	else if (weight <= 2 && weight > 0)
	{
		ratePer500Miles = 1.10;
	}
	else if (weight > 2 && weight <= 6)
	{
		ratePer500Miles = 2.20;
	}
	else if (weight > 6 && weight <= 10)
	{
		ratePer500Miles = 3.70;
	}
	else if (weight > 10 && weight <= 20)
	{
		ratePer500Miles = 4.80;
	}

	// user inputs distance
	cout << "Enter the distance in miles the package must be shipped: ";
	cin >> distance;
	cout << endl;

	// distance must be greater than 10 and less than 3000
	if (distance < 10)
	{
		cout << "The distance entered does not meet the company's mininum shipping distance of 10 miles.";
		return 0;
	}
	else if (distance > 3000)
	{
		cout << "The distance entered exceeds the company's maximun shipping distance of 3,000 miles.";
		return 0;
	}

	// calculating the increments of every 500 miles
	distanceIntervals = round(static_cast<double>(distance) / 500);
	shippingCost = ratePer500Miles * distanceIntervals; // total cost

	cout << fixed << setprecision(2);
	cout << "The total cost to ship a " << weight << " kg package " << distance << " miles will be: $" << shippingCost;
	
	return 0;
}