#pragma once

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;

public:
    Inventory(); // Default constructor
    Inventory(int newItemNumber, double newCost, int newQuantity); // Argument constructor

    void setItemNumber(int newItemNumber);
    int getItemNumber() const;

    void setQuantity(int newQuantity);
    int getQuantity() const;

    void setCost(double newCost);
    double getCost() const;

    double getTotalCost() const;
};
