#pragma once
#include <iostream>
using namespace std;

class NumberArray {
private:
    float* array;  
    int size;    

public:
     NumberArray(int size);

     ~NumberArray();

 
    void setValue(int index, float value); 

    //retrieve a value from the array
    float getValue(int index) const;      

    //returns the highest value in the array
    float getHighest() const;             

    //returns the lowest value in the array
    float getLowest() const;              

    //returns the average of the array elements
    float getAverage() const;              
};
