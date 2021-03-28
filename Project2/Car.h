
#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
private:
	int year;
	std::string maker;
	std::string model;
	int speed;

public:
	Car(int year, std::string maker, std::string model);

	int getYear () const;

	std:: string getMaker() const;
	
	std:: string getModel() const;
	
	int getSpeed();

	void accelerate() ;

	void brake() ;
	


};
#endif // !CAR_H
