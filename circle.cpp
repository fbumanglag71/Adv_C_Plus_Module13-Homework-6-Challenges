#include "circle.h"
#include <iostream>
using namespace std;

//default constructor
//pre condition:none
//post condition:radius is initialized to 0.0
Circle::Circle() : radius(0.0) {}

//constructor with parameters
//pre condition:a valid double value (r) is passed as an argument
//post condition:the radius is set to r if it is non-negative, otherwise set to 0.0
Circle::Circle(double r) {
    setRadius(r);  //validates radius before setting it
}

//mutator for radius
//pre condition:a double value (r) is passed as an argument
//post condition:the radius is set to r if non-negative, otherwise radius is set to 0.0
void Circle::setRadius(double r) {
    if (r >= 0) {
        radius = r;
    }
    else {
        cout << "Error: Radius cannot be negative.\n";
        radius = 0.0;  //default value in case of invalid input
    }
}

//accessor for radius
//pre condition:none
//post condition:returns the current radius value
double Circle::getRadius() const {
    return radius;
}

//calculates area
//pre condition:radius must be set
//post condition:returns the area of the circle using the formula pi * radius^2
double Circle::getArea() const {
    return pi * radius * radius;
}

//calculates diameter
//pre condition:radius must be set
//post condition:returns the diameter of the circle, which is 2 * radius
double Circle::getDiameter() const {
    return radius * 2;
}

//calculates circumference
//pre condition:radius must be set
//post condition:returns the circumference of the circle, which is 2 * pi * radius
double Circle::getCircumference() const {
    return 2 * pi * radius;
}
