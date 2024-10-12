#include "number.h"

//constructor
NumberArray::NumberArray(int size) {
    if (size > 0) {
        this->size = size;
        array = new float[size];
    }
    else {
        cout << "Error: Size must be greater than 0.\n";
        this->size = 1;  //setting to minimum size
        array = new float[1];
    }
}

//destructor
NumberArray::~NumberArray() {
    delete[] array;  //free the allocated memory
}

//set value in array
void NumberArray::setValue(int index, float value) {
    if (index >= 0 && index < size) {
        array[index] = value;
    }
    else {
        cout << "Error: Invalid index.\n";
    }
}

//get value from array
float NumberArray::getValue(int index) const {
    if (index >= 0 && index < size) {
        return array[index];
    }
    else {
        cout << "Error: Invalid index.\n";
        return -1;  //returning an invalid value
    }
}

//get highest value in the array
float NumberArray::getHighest() const {
    float highest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > highest) {
            highest = array[i];
        }
    }
    return highest;
}

//get lowest value in the array
float NumberArray::getLowest() const {
    float lowest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < lowest) {
            lowest = array[i];
        }
    }
    return lowest;
}

//get average of array values
float NumberArray::getAverage() const {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total / size;
}
