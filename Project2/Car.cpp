#include "Car.h"
#include <string>
#include <iostream>

Car:: Car(int year, std::string maker, std::string model) 
{
	this->year = year;
	this->maker = maker;
	this->model = model;
	speed = 0;
}

int Car:: getYear() const{
	return year;
}

std::string Car:: getMaker() const {
	return maker;
}

std::string Car:: getModel() const {
	return model;
}

int Car:: getSpeed()  {
	return speed;
}

void Car:: accelerate()  {
	speed += 5;
	if (speed >= 0 && speed <= 150)
	{
		speed;
	}
	else std::cout << "You are over/under the speed limit" << std::endl;
}

void Car:: brake()  {
	speed -= 5;
	if (speed >= 0&& speed <=150)
	{
	 speed;
	}
	else std::cout << "You are over/under the speed limit" << std::endl;
}