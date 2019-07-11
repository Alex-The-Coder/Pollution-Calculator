#include <iostream>
#include <string>
#include <vector>
#include "Polluter.h"
#include "Car.h"
#include "ElectricHome.h"
#include "FamilyMeal.h"
using namespace std;

int main()
{
	vector<Polluter*> polluters;

	for (int i = 1; i < 4; i++)
	{
		A:
		cout << "Polluter #" << i << endl;
		cout << "Choose a type of polluter (1 = Car, 2 = Electric Home, 3 = Family Meal): ";
		char c;
		cin >> c;

		switch (c)
		{
		case '1':
			cout << "SELECTED CAR" << endl;
			polluters.push_back(new Car(i));
			break;
		case '2':
			cout << "SELECTED HOME" << endl;
			polluters.push_back(new ElectricHome(i));
			break;
		case '3':
			cout << "SELECTED MEAL" << endl;
			polluters.push_back(new FamilyMeal(i));
			break;
		default:
			cout << "Invalid choice!" << endl;
			goto A;
			break;
		}
	}

	cout << endl;
	cout << "Pollution Calculations:" << endl;

	for (Polluter* polluter : polluters)
	{
		polluter->getCarbonFootprint();
	}

	return 0;
}
