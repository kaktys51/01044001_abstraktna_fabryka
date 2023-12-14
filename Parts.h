#pragma once
#include <iostream>
#include <string>

using namespace std;

class Part
{
public:
	virtual string getString() = 0;
	virtual ~Part() {};
};

//default
class Carcase: public Part
{
};

class Engine : public Part
{
};

class Wheells : public Part
{
};

class Transmission : public Part
{
};


//custom


class Universal : public Carcase
{
public:
	string getString() { return "Universal"; }
};

class Casual : public Engine
{
public:
	string getString() { return "Casual 125 HP"; }
};

class Goodyear: public Wheells
{
public:
	string getString() { return "Goodyear EfficientGrip Compact"; }
};

class ManualTransmission : public Transmission
{
public:
	string getString() { return "Manual Transmission"; }
};


//custoum 2


class Hatchback : public Carcase
{
public:
	string getString() { return "Hatchback"; }
};

class Sport : public Engine
{
public:
	string getString() { return "Sport 250 HP"; }
};

class Bridgestone: public Wheells
{
public:
	string getString() { return "Bridgestone Potenza Sport"; }
};

class SequentialTransmission : public Transmission
{
public:
	string getString() { return "Sequential manual transmission"; }
};


//custom 3

class Crossover : public Carcase
{
public:
	string getString() { return "Crossover"; }
};

class Utility : public Engine
{
public:
	string getString() { return "Utility 210 HP"; }
};

class Cooper : public Wheells
{
public:
	string getString() { return "Cooper Discoverer"; }
};

class AutomaticTransmission : public Transmission
{
public:
	string getString() { return "Automatic transmission"; }
};