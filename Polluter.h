#ifndef POLLUTER_H_
#define POLLUTER_H_

class Polluter
{
private:
	int number;
protected:
	virtual void loadData() = 0;
public:
	Polluter(int);

	int getNumber();

	virtual void getCarbonFootprint() = 0;
};

#endif /* POLLUTER_H_ */
