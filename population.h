#pragma once
#include <iostream>
using namespace std;

class Population {
private:
    int population;   
    int births;       
    int deaths;       

public:
   
    Population();

    Population(int pop, int births, int deaths);

    //mutator for population
    void setPopulation(int pop);   

    //mutator for births
    void setBirths(int births);   

    //mutator for deaths
    void setDeaths(int deaths);   

    //accessor for birth rate
    double getBirthRate() const;   

    //accessor for death rate
    double getDeathRate() const;  
};
