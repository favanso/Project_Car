#include <iostream>
#include "Car.h"
#include <string>
using namespace std;


int main() {
	Car myCar(2008, "Kia", "Optima");

	

	for (int i = 1; i < 5; i++) {
		myCar.accelerate();
		cout <<"Your car speed is "<< myCar.getSpeed() << endl;

	}

	for (int i = 1; i < 5; i++) {
		myCar.brake();
		cout << "Your car speed is "<< myCar.getSpeed() << endl;
	}

	myCar.brake();
	
	for (int i = 1; i < 33; i++) {
		myCar.accelerate();
		
	}
	
	return 0;
}