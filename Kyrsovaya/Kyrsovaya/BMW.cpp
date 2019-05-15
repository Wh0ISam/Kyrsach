#include "BMW.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


BMW::BMW()
{
}

void BMW::setPrice(int xPrice)
{
	price = xPrice;
}

int BMW::getPrice()
{
	return price;
}

void BMW::setModel(string xModel)
{
	model = xModel;
}

string BMW::getModel()
{
	return model;
}

void BMW::setSpeed(int xSpeed)
{
	speed = xSpeed;
}

int BMW::getSpeed()
{
	return speed;
}

void BMW::setAccelerator(double xAccelerator)
{
	acceleration = xAccelerator;
}

double BMW::getAccelerator()
{
	return acceleration;
}

void BMW::setVolume(int xVolume)
{
	volume = xVolume;
}

int BMW::getVolume()
{
	return volume;
}

void BMW::setWeight(int xWeight)
{
	weight = xWeight;
}

int BMW::getWeight()
{
	return weight;
}

void BMW::setSeating(int xSeating)
{
	seating = xSeating;
}

int BMW::getSeating()
{
	return seating;
}

void BMW::setFuelconsumption(int xFuelconsumption)
{
	fuelconsumption = xFuelconsumption;
}

int BMW::getFuelconsumption()
{
	return fuelconsumption;
}


void BMW::print()
{
	cout   << acceleration << " " << fuelconsumption << " " << model << " " << price << " " << seating << " " << speed << " " << volume << " " << weight;
}

BMW::~BMW()
{
}
