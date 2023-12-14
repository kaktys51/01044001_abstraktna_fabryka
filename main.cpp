#include <iostream>
#include <memory>
#include "Parts.h"
#include "CarCOnfigurator.h"
#include "Car.h"

using namespace std;

void PrintCar(const string& carConfig, shared_ptr<Car> car)
{
	cout << "\n======== " << carConfig << " ========\n";
	cout << "Carcase: " << car->getCarcase()->getString() << endl;
	cout << "Engine: " << car->getEngine()->getString() << endl;
	cout << "Wheells: " << car->getWheells()->getString() << endl;
	cout << "Transmission: " << car->getTransmission()->getString() << endl;
	cout << "Total price: " << car->getPrice() << endl;
}

int main()
{
	auto config = make_shared<CarConfigurator>();
	auto car1 = make_shared<Car>();

	config->setCarFactory(make_shared<FamilyCar>());
	config->Config((car1));
	PrintCar("Family car settup", car1);

	auto car2 = make_shared<Car>();
	config->setCarFactory(make_shared<SportyCar>());
	config->Config((car2));
	PrintCar("Sporty car settup", car2);

	auto car3 = make_shared<Car>();
	config->setCarFactory(make_shared<CrossoverCar>());
	config->Config((car3));
	PrintCar("Crossover car settup", car3);


	return 0;
}
