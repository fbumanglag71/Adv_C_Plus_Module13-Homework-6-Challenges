#include "population.h"

//default constructor
Population::Population() : population(0), births(0), deaths(0) {}

//constructor with parameters
Population::Population(int pop, int births, int deaths) {
    setPopulation(pop);
    setBirths(births);
    setDeaths(deaths);
}

//mutator for population
void Population::setPopulation(int pop) {
    if (pop > 0) {
        population = pop;
    }
    else {
        cout << "Error: Population cannot be less than 1.\n";
        population = 1;  //setting to minimum value
    }
}

//mutator for births
void Population::setBirths(int births) {
    if (births >= 0) {
        this->births = births;
    }
    else {
        cout << "Error: Births cannot be negative.\n";
        this->births = 0;  //setting to minimum value
    }
}

//mutator for deaths
void Population::setDeaths(int deaths) {
    if (deaths >= 0) {
        this->deaths = deaths;
    }
    else {
        cout << "Error: Deaths cannot be negative.\n";
        this->deaths = 0;  //setting to minimum value
    }
}

//accessor for birth rate
double Population::getBirthRate() const {
    return static_cast<double>(births) / population;
}

//accessor for death rate
double Population::getDeathRate() const {
    return static_cast<double>(deaths) / population;
}
