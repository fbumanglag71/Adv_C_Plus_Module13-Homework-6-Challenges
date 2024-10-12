#include "patient.h"

// constructor
//precondition: valid string values for first, middle, last, addr, city, state, zip, phone, emergencyName, and emergencyPhone are passed as arguments
//postcondition: sets firstName, middleName, lastName, address, city, state, zip, phone, emergencyName, and emergencyPhone to the values passed as arguments
Patient::Patient(string first, string middle, string last, string addr, string city, string state, string zip, string phone, string emergencyName, string emergencyPhone)
    : firstName(first), middleName(middle), lastName(last), address(addr), city(city), state(state), zip(zip), phone(phone), emergencyName(emergencyName), emergencyPhone(emergencyPhone) {}

// getters
//precondition: none
//postcondition: returns the value of firstName
string Patient::getFirstName() const { return firstName; }

//precondition: none
//postcondition: returns the value of middleName
string Patient::getMiddleName() const { return middleName; }

//precondition: none
//postcondition: returns the value of lastName
string Patient::getLastName() const { return lastName; }

//precondition: none
//postcondition: returns the value of address
string Patient::getAddress() const { return address; }

//precondition: none
//postcondition: returns the value of city
string Patient::getCity() const { return city; }

//precondition: none
//postcondition: returns the value of state
string Patient::getState() const { return state; }

//precondition: none
//postcondition: returns the value of zip
string Patient::getZip() const { return zip; }

//precondition: none
//postcondition: returns the value of phone
string Patient::getPhone() const { return phone; }

//precondition: none
//postcondition: returns the value of emergencyName
string Patient::getEmergencyName() const { return emergencyName; }

//precondition: none
//postcondition: returns the value of emergencyPhone
string Patient::getEmergencyPhone() const { return emergencyPhone; }

// setters
//precondition: a valid string for first is passed as an argument
//postcondition: sets firstName to the value passed as an argument
void Patient::setFirstName(string first) { firstName = first; }

//precondition: a valid string for middle is passed as an argument
//postcondition: sets middleName to the value passed as an argument
void Patient::setMiddleName(string middle) { middleName = middle; }

//precondition: a valid string for last is passed as an argument
//postcondition: sets lastName to the value passed as an argument
void Patient::setLastName(string last) { lastName = last; }

//precondition: a valid string for addr is passed as an argument
//postcondition: sets address to the value passed as an argument
void Patient::setAddress(string addr) { address = addr; }

//precondition: a valid string for city is passed as an argument
//postcondition: sets city to the value passed as an argument
void Patient::setCity(string city) { this->city = city; }

//precondition: a valid string for state is passed as an argument
//postcondition: sets state to the value passed as an argument
void Patient::setState(string state) { this->state = state; }

//precondition: a valid string for zip is passed as an argument
//postcondition: sets zip to the value passed as an argument
void Patient::setZip(string zip) { this->zip = zip; }

//precondition: a valid string for phone is passed as an argument
//postcondition: sets phone to the value passed as an argument
void Patient::setPhone(string phone) { this->phone = phone; }

//precondition: a valid string for emergencyName is passed as an argument
//postcondition: sets emergencyName to the value passed as an argument
void Patient::setEmergencyName(string emergencyName) { this->emergencyName = emergencyName; }

//precondition: a valid string for emergencyPhone is passed as an argument
//postcondition: sets emergencyPhone to the value passed as an argument
void Patient::setEmergencyPhone(string emergencyPhone) { this->emergencyPhone = emergencyPhone; }
