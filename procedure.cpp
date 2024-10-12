#include "Procedure.h"

//constructor
//precondition: none
//postcondition: sets procedureName, date, practitioner, and charge to the values passed as arguments
Procedure::Procedure(string procedureName, string date, string practitioner, double charge)
    : procedureName(procedureName), date(date), practitioner(practitioner), charge(charge) {}

//getters
//precondition: none
//postcondition: returns the value of procedureName
string Procedure::getProcedureName() const { return procedureName; }

//precondition: none
//postcondition: returns the value of date
string Procedure::getDate() const { return date; }

//precondition: none
//postcondition: returns the value of practitioner
string Procedure::getPractitioner() const { return practitioner; }

//precondition: none
//postcondition: returns the value of charge
double Procedure::getCharge() const { return charge; }

//setters
//precondition: none
//postcondition: sets procedureName to the value passed as an argument
void Procedure::setProcedureName(string procedureName) { this->procedureName = procedureName; }

//precondition: none
//postcondition: sets date to the value passed as an argument
void Procedure::setDate(string date) { this->date = date; }

//precondition: none
//postcondition: sets practitioner to the value passed as an argument
void Procedure::setPractitioner(string practitioner) { this->practitioner = practitioner; }

//precondition: none
//postcondition: sets charge to the value passed as an argument
void Procedure::setCharge(double charge) { this->charge = charge; }
