#include <iostream>
#include "Polluter.h"
#include "Car.h"
using namespace std;

Car::Car(int number): Polluter(number)
{
	loadData();
}

void Car::loadData()
{
	cout << "What model car do you have?" << endl;
	cin.ignore(2);
	getline(cin, model, '\n');

	cout << "How many miles per gallon does that model get?" << endl;
	cin >> milesPerGallon;

	cout << "How many miles do you drive per week?" << endl;
	cin >> milesPerWeek;
}

void Car::getCarbonFootprint()
{
	float emission = (milesPerWeek * weeksPerYear) / milesPerGallon * co2PerGallon * otherEmissions;

	cout << "Polluter #" << getNumber() << " - Car" << endl;
	cout << " Model: " << model << endl;
	cout << " Miles Per Week: " << milesPerWeek << endl;
	cout << " Weeks Per Year: " << weeksPerYear << endl;
	cout << " Miles Per Gallon: " << milesPerGallon << endl;
	cout << " Pounds of CO2 Emitted Per Gallon: " << co2PerGallon << endl;
	cout << " Emissions of Other Greenhouse Gases: " << otherEmissions << endl;
	cout << " TOTAL CO2 EMITTED: " << emission << " lbs. Per Year" << endl;
}
