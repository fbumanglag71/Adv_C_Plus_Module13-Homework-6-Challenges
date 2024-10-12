#include "input.h"
#include "Date.h"
#include "car.h"
#include "patient.h"
#include "procedure.h"
#include "Inventory.h"
#include "Circle.h"
#include "population.h"
#include "number.h"
#include <iomanip>
#include <iostream>

using namespace std;

//function prototypes
int mainMenuOption();     //displays the main menu for all challenges
int dateSubMenu();        //displays the date submenu for challenge 1
int carSubMenu();         //displays the car submenu for challenge 3
void Challenge1();        //challenge 1: date manipulation
void runCarDemo();        //run the car acceleration/brake demonstration (challenge 3)
void Challenge4();        //challenge 4: patient charges demo
void runPatientDemo();    //run the patient and procedure demo (challenge 4)
void Challenge6();        //challenge 6: inventory management demo
void Challenge8();        //challenge 8: circle class demo
void runCircleDemo();     //run the circle class demo (challenge 8)
void Challenge9();        //challenge 9: population and number array demo
void runPopulationDemo(); //run the population and number array demo (challenge 9)

int main()
{
    bool running = true;

    while (running) //loop for main menu
    {
        switch (mainMenuOption()) //handle main menu options
        {
        case 0:
            running = false; //exit main menu loop
            break;
        case 1:
            dateSubMenu();  //open date submenu (challenge 1)
            break;          //return to main menu after closing date submenu
        case 3:
            carSubMenu();  //open car submenu (challenge 3)
            break;         //return to main menu after closing car submenu
        case 4:
            Challenge4();  //run patient charges demo (challenge 4)
            break;         //return to main menu after running patient demo
        case 6:
            Challenge6();  //run inventory management demo (challenge 6)
            break;
        case 8:
            Challenge8();  //run circle class demo (challenge 8)
            break;
        case 9:
            Challenge9();  //run population and number array demo (challenge 9)
            break;
        default:
            cout << "\t\tERROR - Invalid option. Please re-enter.\n";
            break;
        }
        cout << "\n";
        if (running)
        {
            cin.ignore();  //clear the buffer
            cin.get();     //pause after each menu action, only if still running
        }
    }

    return EXIT_SUCCESS;
}

//main menu function displaying options for challenges
int mainMenuOption()
{
    cout << "\n\tCMPR121 Chapter 13: UML Designs, Implementation & Header Files by Francisco Bumanglag";
    cout << "\n\t" << string(60, char(205));
    cout << "\n\t1. Challenge 1 -- Date";
    cout << "\n\t3. Challenge 3 -- Car Class";
    cout << "\n\t4. Challenge 4 -- Patient Charges";
    cout << "\n\t6. Challenge 6 -- Inventory Management";
    cout << "\n\t8. Challenge 8 -- Circle Class";
    cout << "\n\t9. Challenge 9 -- Population and Number Array";
    cout << "\n\t0. Exit";
    cout << "\n\t" << string(60, char(205));

    return inputInteger("\n\tOption: ", 0, 9);  //get the user input
}

//cate submenu for Challenge 1
int dateSubMenu()
{
    bool dateRunning = true;

    while (dateRunning) //loop for date subform
    {
        cout << "\n\t============================";
        cout << "\n\t1. Input Date";
        cout << "\n\t2. Back to Main Menu";  //option to return to the main menu
        cout << "\n\t============================";

        int option = inputInteger("\n\tOption: ", 1, 2);

        switch (option)
        {
        case 1:
            Challenge1(); //call challenge1 (date manipulation)
            break;
        case 2:
            dateRunning = false; //exit date subform and return to main menu
            break;
        default:
            cout << "\t\tERROR - Invalid option. Please re-enter.\n";
            break;
        }

        if (dateRunning)
        {
            cout << "\n";
            cin.ignore();  //clear buffer
            cin.get();     //pause after each action within the subform
        }
    }

    return 0; //return to main menu when dateRunning becomes false
}

//challenge 1: Date manipulation function
void Challenge1()
{
    Date testDate;  //create date object

    testDate.setMonth(inputInteger("\n\tEnter a month (1...12): ", 1, 12));
    cout << "\n\tCurrent month: " << testDate.getMonth() << "\n";

    testDate.setDay(inputInteger("\n\tEnter a day (1...31): ", 1, 31));
    cout << "\n\tCurrent day: " << testDate.getDay() << "\n";

    testDate.setYear(inputInteger("\n\tEnter a year (1924...2024): ", 1924, 2024));
    cout << "\n\tCurrent year: " << testDate.getYear() << "\n";

    cout << "\n\tDate format 1: " << testDate.getDateFormat1() << "\n";

    cout << "\n\tDate format 2: " << testDate.getDateFormat2() << "\n";

    cout << "\n\tDate format 3: " << testDate.getDateFormat3() << "\n";
}

//car submenu for Challenge 3
int carSubMenu()
{
    bool carRunning = true;

    while (carRunning)
    {
        cout << "\n\t============================";
        cout << "\n\t        Car Submenu";
        cout << "\n\t============================";
        cout << "\n\t1. Run Car Demo";
        cout << "\n\t2. Back to Main Menu";
        cout << "\n\t============================";

        int option = inputInteger("\n\tOption: ", 1, 2);

        switch (option)
        {
        case 1:
            runCarDemo(); //calls the car demo
            break;
        case 2:
            carRunning = false; //exit car submenu and return to main menu
            break;
        default:
            cout << "\t\tERROR - Invalid option. Please re-enter.\n";
            break;
        }

        if (carRunning)
        {
            system("pause");
        }
    }

    return 0; //exit the submenu and return to the main menu
}

//car demo for acceleration and braking (Challenge 3)
void runCarDemo() {
    Car myCar(2024, "Toyota");

    //accelerate the car five times
    cout << "\nAccelerating...";
    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        cout << "\nCurrent Speed: " << myCar.getSpeed() << " mph";
    }

    //brake the car five times
    cout << "\n\nBraking...";
    for (int i = 0; i < 5; i++) {
        myCar.brake();
        cout << "\nCurrent Speed: " << myCar.getSpeed() << " mph";
    }
}

//challenge 4: Patient charges demo
void Challenge4()
{
    runPatientDemo();
}

//run the demo for patient and procedures (Challenge 4)
void runPatientDemo()
{
    //sample patient
    Patient patient("Francisco", "I", "Bumanglag", "123 Main St", "Santa Ana", "CA", "12345", "555-555-5555", "Jane Doe", "123-456-7890");

    //sample procedures
    Procedure procedure1("Physical Exam", "09/29/2024", "Dr. Irvine", 250.00);
    Procedure procedure2("X-ray", "09/29/2024", "Dr. Jamison", 500.00);
    Procedure procedure3("Blood Test", "09/29/2024", "Dr. Smith", 200.00);

    //display patient info
    cout << "\nPatient Information: " << endl;
    cout << "Name: " << patient.getFirstName() << " " << patient.getMiddleName() << " " << patient.getLastName() << endl;
    cout << "Address: " << patient.getAddress() << ", " << patient.getCity() << ", " << patient.getState() << " " << patient.getZip() << endl;
    cout << "Phone: " << patient.getPhone() << endl;
    cout << "Emergency Contact: " << patient.getEmergencyName() << " - " << patient.getEmergencyPhone() << endl;

    //display procedures
    cout << "\nProcedures:" << endl;
    cout << "1. " << procedure1.getProcedureName() << " performed by " << procedure1.getPractitioner() << " on " << procedure1.getDate() << ". Charge: $" << procedure1.getCharge() << endl;
    cout << "2. " << procedure2.getProcedureName() << " performed by " << procedure2.getPractitioner() << " on " << procedure2.getDate() << ". Charge: $" << procedure2.getCharge() << endl;
    cout << "3. " << procedure3.getProcedureName() << " performed by " << procedure3.getPractitioner() << " on " << procedure3.getDate() << ". Charge: $" << procedure3.getCharge() << endl;

    //total charges
    double totalCharges = procedure1.getCharge() + procedure2.getCharge() + procedure3.getCharge();
    cout << "\nTotal Charges: $" << totalCharges << endl;
}

//challenge 6: Inventory management demo
void Challenge6()
{
    Inventory test1;

    Inventory test2(666, 6.66, 66);

    test2.setItemNumber(inputInteger("\nEnter an item number: ", true));

    cout << "test2's itemNumber: " << test2.getItemNumber() << "\n" << endl;

    test2.setQuantity(inputInteger("\nEnter a quantity: ", true));

    cout << "\ntest2's quantity: " << test2.getQuantity();

    test2.setCost(inputDouble("\nEnter a cost: $", 0.0, 10000.00));

    cout << "\ntest2's cost: " << test2.getCost();

    cout << fixed << showpoint << setprecision(2);
    cout << "\ntest2's total cost : $" << test2.getTotalCost();
}

//challenge 8: Circle class demo
void Challenge8()
{
    runCircleDemo();
}

//circle demo function (Challenge 8)
void runCircleDemo()
{
    double userRadius;

    //prompt user for radius input
    cout << "\nEnter the radius of the circle: ";
    cin >> userRadius;

    //creating circle object
    Circle myCircle(userRadius);

    //display the circle's area, diameter, and circumference
    cout << "\nCircle Information:";
    cout << "\nRadius: " << myCircle.getRadius();
    cout << "\nArea: " << myCircle.getArea();
    cout << "\nDiameter: " << myCircle.getDiameter();
    cout << "\nCircumference: " << myCircle.getCircumference() << endl;
}

//challenge 9: Population and number array demo
void Challenge9()
{
    runPopulationDemo();
}

//population demo function (Challenge 9)
void runPopulationDemo()
{
    int population, births, deaths;

    //prompt user for population details
    cout << "\nEnter population: ";
    cin >> population;
    cout << "Enter number of births: ";
    cin >> births;
    cout << "Enter number of deaths: ";
    cin >> deaths;

    //create population object
    Population popObj(population, births, deaths);

    //display birth and death rates
    cout << "\nPopulation Statistics:";
    cout << "\nBirth Rate: " << popObj.getBirthRate();
    cout << "\nDeath Rate: " << popObj.getDeathRate() << endl;

    //demonstrate NumberArray
    int size;
    cout << "\nEnter the size of the number array: ";
    cin >> size;
    NumberArray numArray(size);

    //populate array
    for (int i = 0; i < size; i++) {
        float value;
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> value;
        numArray.setValue(i, value);
    }

    //display array statistics
    cout << "\nArray Statistics:";
    cout << "\nHighest Value: " << numArray.getHighest();
    cout << "\nLowest Value: " << numArray.getLowest();
    cout << "\nAverage Value: " << numArray.getAverage() << endl;
}
