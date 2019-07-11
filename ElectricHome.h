#ifndef ELECTRICHOME_H_
#define ELECTRICHOME_H_

#include "Polluter.h"

class ElectricHome : public Polluter
{
private:
	float monthlyBill;

	static constexpr float pricePerKWH = 0.20;
	static constexpr float emissionFactor = 1.37;
	static const int monthsPerYear = 12;
protected:
	virtual void loadData();
public:
	ElectricHome(int);

	virtual void getCarbonFootprint();
};

#endif /* ELECTRICHOME_H_ */
