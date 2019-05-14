#pragma once
#include <string>
using namespace std;
class BMW
{
protected:
	int price;
	string model;
	int speed;
	double acceleration;
	int volume;
	int weight;
	int seating;
	int fuelconsumption;
public:
	BMW();
	void setPrice(int xPrice);
	int getPrice();

	void setModel(string xModel);
	string getModel();

	void setSpeed(int xSpeed);
	int getSpeed();

	void setAccelerator(double xAccelerator);
	double getAccelerator();

	void setVolume(int xVolume);
	int getVolume();

	void setWeight(int xWeight);
	int getWeight();

	void setSeating(int xSeating);
	int getSeating();


	void setFuelconsumption(int xFuelconsumption);
	int getFuelconsumption();


	~BMW();
};


