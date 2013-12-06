#include "Car.h"
#include <string>
#include <iostream>

using namespace std;
Car::Car(std::string name)
{
	this->name = name;
}


Car::~Car()
{
}

ostream& operator <<(ostream& os, const Car& car){
	os << car.name;
	return os;
}