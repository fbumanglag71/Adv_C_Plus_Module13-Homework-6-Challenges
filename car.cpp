#include "Car.h"

//pre-condition: valid integer year model and string make are passed as arguments
//post-condition: car object is created with speed set to 0 and given year model and make
Car::Car(int ym, string mk) : yearModel(ym), make(mk), speed(0) {}

//pre-condition: none
//post-condition: returns the value of yearmodel
int Car::getYearModel() const {
    return yearModel;
}

//pre-condition: none
//post-condition: returns the value of make
string Car::getMake() const {
    return make;
}

//pre-condition: none
//post-condition: returns the current speed of the car
int Car::getSpeed() const {
    return speed;
}

//pre-condition: none
//post-condition: increases the car's speed by 5
void Car::accelerate() {
    speed += 5;
}

//pre-condition: car speed must be greater than or equal to 0
//post-condition: decreases the car's speed by 5, but not below 0
void Car::brake() {
    if (speed >= 5)
        speed -= 5;
    else
        speed = 0;
}
