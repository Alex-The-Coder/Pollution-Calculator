#include <iostream>
#include "Polluter.h"
#include "ElectricHome.h"
using namespace std;

ElectricHome::ElectricHome(int number): Polluter(number)
{
	loadData();
}

void ElectricHome::loadData()
{
	cout << "What is your average monthly electric bill?" << endl;
	cin >> monthlyBill;
}

void ElectricHome::getCarbonFootprint()
{
	float emission = (monthlyBill * pricePerKWH) / emissionFactor * monthsPerYear;

	cout << "Polluter #" << getNumber() << " - Electric Home" << endl;
	cout << " Monthly Electric Bill: $" << monthlyBill << endl;
	cout << " Average Price Per Kilowatt Hour: " << pricePerKWH << endl;
	cout << " Electricity Emissions Factor: " << emissionFactor << endl;
	cout << " Months Per Year: " << monthsPerYear << endl;
	cout << " TOTAL CO2 EMITTED: " << emission << " lbs. Per Year" << endl;
}
