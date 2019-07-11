#ifndef CAR_H_
#define CAR_H_

#include "Polluter.h"
#include <string>
using namespace std;

class Car : public Polluter
{
private:
	string model;
	float milesPerWeek;
	float milesPerGallon;

	static constexpr float weeksPerYear = 52.1429;
	static constexpr float co2PerGallon = 19.4;
	static constexpr float otherEmissions = (100.f / 95.f);
protected:
	virtual void loadData();
public:
	Car(int);

	virtual void getCarbonFootprint();
};

#endif /* CAR_H_ */
