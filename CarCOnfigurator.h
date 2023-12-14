#pragma once
#include<iostream>
#include"Car.h"
#include"Parts.h"
#include"Factory_auto.h"

using namespace std;

class CarConfigurator
{
	shared_ptr<DefCarFactory> carFactory;
public:
	CarConfigurator() { carFactory = nullptr; }
	virtual ~CarConfigurator() {}
	shared_ptr<DefCarFactory> getCarFactory()
	{
		return (carFactory);
	}
	void setCarFactory(shared_ptr<DefCarFactory> curCarFactory)
	{
		carFactory = (curCarFactory);
	}
	void Config(shared_ptr<Car> car)
	{
		car->setCarcase((carFactory->CreateCarcase()));
		car->setEngine((carFactory->CreateEngine()));
		car->setWheells((carFactory->CreateWheells()));
		car->setTranmission((carFactory->CreateTransmission()));
		car->setPrice((carFactory->CreatePrice()));
	}
};