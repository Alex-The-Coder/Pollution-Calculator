#include <iostream>
#include "Polluter.h"
#include "FamilyMeal.h"
using namespace std;

FamilyMeal::FamilyMeal(int number): Polluter(number)
{
	loadData();
}

void FamilyMeal::loadData()
{
	cout << "How much do you spend on meat, fish, and eggs during an average month?" << endl;
	cin >> meatFishEggsBill;

	cout << "How much do you spend on cereal and bakery products during an average month?" << endl;
	cin >> cerealBakeryBill;

	cout << "How much do you spend on dairy during an average month?" << endl;
	cin >> dairyBill;

	cout << "How much do you spend on fruits and vegetables during an average month?" << endl;
	cin >> fruitVegetableBill;

	cout << "How much do you spend on dining out during an average month?" << endl;
	cin >> eatOutBill;

	cout << "How much do you spend on other foods during an average month?" << endl;
	cin >> otherBill;
}

void FamilyMeal::getCarbonFootprint()
{
	float emission = 0.f;
	emission += ((meatFishEggsBill * meatFishEggsEmissionFactor * monthsPerYear) * gramToPound);
	emission += ((cerealBakeryBill * cerealBakeryEmissionFactor * monthsPerYear) * gramToPound);
	emission += ((dairyBill * dairyEmissionFactor * monthsPerYear) * gramToPound);
	emission += ((fruitVegetableBill * fruitVegetableEmissionFactor * monthsPerYear) * gramToPound);
	emission += ((eatOutBill * eatOutEmissionFactor * monthsPerYear) * gramToPound);
	emission += ((otherBill * otherEmissionFactor * monthsPerYear) * gramToPound);

	cout << "Polluter #" << getNumber() << " - Family Meal" << endl;
	cout << " Average Monthly Meat, Fish, and Eggs Bill: $" << meatFishEggsBill << endl;
	cout << " Meat, Fish, and Eggs Emission Factor: " << meatFishEggsEmissionFactor << endl;
	cout << " Average Monthly Cereal and Bakery Products Bill: $" << cerealBakeryBill << endl;
	cout << " Cereal and Bakery Products Emission Factor: " << cerealBakeryEmissionFactor << endl;
	cout << " Average Monthly Dairy Bill: $" << dairyBill << endl;
	cout << " Dairy Emission Factor: " << dairyEmissionFactor << endl;
	cout << " Average Monthly Fruits and Vegetables Bill: $" << fruitVegetableBill << endl;
	cout << " Fruits and Vegetables Emission Factor: " << fruitVegetableEmissionFactor << endl;
	cout << " Average Monthly Dining Out Bill: $" << eatOutBill << endl;
	cout << " Dining Out Emission Factor: " << eatOutEmissionFactor << endl;
	cout << " Average Monthly Other Foods Bill: $" << otherBill << endl;
	cout << " Other Foods Emission Factor: " << otherEmissionFactor << endl;
	cout << " Months Per Year: " << monthsPerYear << endl;
	cout << " Grams to Pounds Conversion: " << gramToPound << endl;
	cout << " TOTAL CO2 EMITTED: " << emission << " lbs. Per Year" << endl;
}
