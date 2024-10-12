#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
    const double pi = 3.14159;  //constant value for pi

public:
    //default constructor
    Circle();

    //constructor with parameter
    Circle(double r);

    //mutator for radius
    void setRadius(double r);

    //accessor for radius
    double getRadius() const;

    //function to calculate area
    double getArea() const;

    //function to calculate diameter
    double getDiameter() const;

    //function to calculate circumference
    double getCircumference() const;
};

#endif
