#pragma once
#include<iostream>
#include "Parts.h"
using namespace std;

class DefCarFactory
{
public:
	virtual shared_ptr<Carcase>		 CreateCarcase() = 0;
	virtual shared_ptr<Engine>		 CreateEngine() = 0;
	virtual shared_ptr<Wheells>		 CreateWheells() = 0;
	virtual shared_ptr<Transmission> CreateTransmission() = 0;
	virtual int						 CreatePrice() = 0;
};

class FamilyCar : public DefCarFactory
{
public:
	shared_ptr<Carcase> CreateCarcase()
	{
		return (make_shared<Universal>());
	}
	shared_ptr<Engine> CreateEngine()
	{
		return (make_shared<Casual>());
	}
	shared_ptr<Wheells> CreateWheells()
	{
		return (make_shared<Goodyear>());
	}
	shared_ptr<Transmission> CreateTransmission()
	{
		return (make_shared<ManualTransmission>());
	}
	int CreatePrice()
	{
		return 5000;
	}
};

class SportyCar : public DefCarFactory
{
public:
	shared_ptr<Carcase> CreateCarcase()
	{
		return (make_shared<Hatchback>());
	}
	shared_ptr<Engine> CreateEngine()
	{
		return (make_shared<Sport>());
	}
	shared_ptr<Wheells> CreateWheells()
	{
		return (make_shared<Bridgestone>());
	}
	shared_ptr<Transmission> CreateTransmission()
	{
		return (make_shared<SequentialTransmission>());
	}
	int CreatePrice()
	{
		return 7600;
	}
};

class CrossoverCar : public DefCarFactory
{
public:
	shared_ptr<Carcase> CreateCarcase()
	{
		return (make_shared<Crossover>());
	}
	shared_ptr<Engine> CreateEngine()
	{
		return (make_shared<Utility>());
	}
	shared_ptr<Wheells> CreateWheells()
	{
		return (make_shared<Cooper>());
	}
	shared_ptr<Transmission> CreateTransmission()
	{
		return (make_shared<AutomaticTransmission>());
	}
	int CreatePrice()
	{
		return 6900;
	}
};