#pragma once
#include<iostream>
#include"Parts.h"

using namespace std;

class Car
{
protected:
	shared_ptr<Carcase>		 carcase;
	shared_ptr<Engine>		 engine;
	shared_ptr<Wheells>		 wheells;
	shared_ptr<Transmission> transmission;
	int price;
public:
	Car()
	{
		carcase = nullptr;
		engine = nullptr;
		wheells = nullptr;
		transmission = nullptr;
		price = 0;
	}
	virtual ~Car(){}

	shared_ptr<Carcase> getCarcase() { return (carcase); }
	void setCarcase(shared_ptr<Carcase> nCarcase)
	{
		carcase = (nCarcase);
	}

	shared_ptr<Engine> getEngine() { return (engine); }
	void setEngine(shared_ptr<Engine> nEngine)
	{
		engine = (nEngine);
	}

	shared_ptr<Wheells> getWheells() { return (wheells); }
	void setWheells(shared_ptr<Wheells> nWheells)
	{
		wheells = (nWheells);
	}

	shared_ptr<Transmission> getTransmission() { return (transmission); }
	void setTranmission(shared_ptr<Transmission> nTransmission)
	{
		transmission = (nTransmission);
	}
	int getPrice() { return price; }
	void setPrice(int nPrice)
	{
		price = nPrice;
	}
};