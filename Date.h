#pragma once
#include <string>
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date(); //default constructor

	void setMonth(int m);

	int getMonth() const;

	void setDay(int d);

	int getDay() const;

	void setYear(int y);

	int getYear() const;

	string getDateFormat1() const;

	string getDateFormat2() const;

	string getDateFormat3() const;


};

