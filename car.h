#pragma once
#include <string>
using namespace std;

class Car {
private:
    int yearModel;   //year model of the car
    string make;     //make of the car
    int speed;       //current speed of the car

public:
    //constructor
    Car(int ym, string mk);

    //accessor for yearModel
    int getYearModel() const;

    //accessor for make
    string getMake() const;

    //accessor for speed
    int getSpeed() const;

    //method to accelerate (increase speed by 5)
    void accelerate();

    //method to brake (decrease speed by 5)
    void brake();
};
