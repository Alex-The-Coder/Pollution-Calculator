#ifndef FAMILYMEAL_H_
#define FAMILYMEAL_H_

#include "Polluter.h"

class FamilyMeal : public Polluter
{
private:
	float meatFishEggsBill;
	float cerealBakeryBill;
	float dairyBill;
	float fruitVegetableBill;
	float eatOutBill;
	float otherBill;

	static const int monthsPerYear = 12;
	static const int meatFishEggsEmissionFactor = 1452;
	static const int cerealBakeryEmissionFactor = 741;
	static const int dairyEmissionFactor = 1911;
	static const int fruitVegetableEmissionFactor = 1176;
	static const int eatOutEmissionFactor = 368;
	static const int otherEmissionFactor = 467;
	static constexpr float gramToPound = .0022;
protected:
	virtual void loadData();
public:
	FamilyMeal(int);

	virtual void getCarbonFootprint();
};

#endif /* FAMILYMEAL_H_ */
