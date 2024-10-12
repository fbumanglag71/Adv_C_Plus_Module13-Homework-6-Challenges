#include "Date.h"

//precondition: none
//postcondition: initializes month, day, and year to 0.
Date::Date()
{
    month = 0;
    day = 0;
    year = 0;
}

//precondition: 'm' should be a valid month.
//postcondition: sets 'month' to the provided value.
void Date::setMonth(int m)
{
    month = m;
}

//precondition: 'month' must be set.
//postcondition: returns the current 'month' value.
int Date::getMonth() const
{
    return month;
}

//precondition: 'd' should be a valid day.
//postcondition: sets 'day' to the provided value.
void Date::setDay(int d)
{
    day = d;
}

//precondition: 'day' must be set.
//postcondition: returns the current 'day' value.
int Date::getDay() const
{
    return day;
}

//precondition: 'y' should be a valid year.
//postcondition: sets 'year' to the provided value.
void Date::setYear(int y)
{
    year = y;
}

//precondition: 'year' must be set.
//postcondition: returns the current 'year' value.
int Date::getYear() const
{
    return year;
}

//precondition: 'month', 'day', 'year' must be set.
//postcondition: returns date in "month/day/year" format.
string Date::getDateFormat1() const
{
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

//precondition: valid 'month', 'day', and 'year'.
//postcondition: returns "MonthName day, year" format string.
string Date::getDateFormat2() const
{
    string monthName[13] = { "unknown", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return monthName[month] + " " + to_string(day) + ", " + to_string(year);
}

//precondition: valid 'month', 'day', and 'year'.
//postcondition: returns "day MonthName year" format string.
string Date::getDateFormat3() const
{
    string monthName[13] = { "unknown", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return to_string(day) + " " + monthName[month] + " " + to_string(year);
}
