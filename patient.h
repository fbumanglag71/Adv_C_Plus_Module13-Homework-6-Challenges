#pragma once
#include <string>
using namespace std;

class Patient {
private:
    string firstName, middleName, lastName;
    string address, city, state, zip;
    string phone;
    string emergencyName, emergencyPhone;

public:
    //constructor
    Patient(string first, string middle, string last, string addr, string city, string state, string zip, string phone, string emergencyName, string emergencyPhone);

    //getters
    string getFirstName() const;
    string getMiddleName() const; 
    string getLastName() const;
    string getAddress() const;
    string getCity() const;
    string getState() const;
    string getZip() const;
    string getPhone() const;
    string getEmergencyName() const;
    string getEmergencyPhone() const;

    //setters
    void setFirstName(string first);
    void setMiddleName(string middle);
    void setLastName(string last);
    void setAddress(string addr);
    void setCity(string city);
    void setState(string state);
    void setZip(string zip);
    void setPhone(string phone);
    void setEmergencyName(string emergencyName);
    void setEmergencyPhone(string emergencyPhone);
};
