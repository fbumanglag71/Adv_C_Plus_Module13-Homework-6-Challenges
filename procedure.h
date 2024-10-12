#pragma once
#include <string>
using namespace std;

class Procedure {
private:
    string procedureName;
    string date;
    string practitioner;
    double charge;

public:
    //constructor
    Procedure(string procedureName, string date, string practitioner, double charge);

    //getters
    string getProcedureName() const;
    string getDate() const;           
    string getPractitioner() const;
    double getCharge() const;

    //setters
    void setProcedureName(string procedureName);
    void setDate(string date);
    void setPractitioner(string practitioner);
    void setCharge(double charge);
};
