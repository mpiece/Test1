#pragma once
#include <string>
#include <iostream>
class Car
{
private:
	std::string name;
	friend std::ostream& operator <<(std::ostream& os, const Car& car);
public:
	
	Car(std::string name);
	~Car();
};

std::ostream& operator <<(std::ostream& os, const Car& car);