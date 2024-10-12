#include "Inventory.h"

//Precondition: none
//Postcondition: set itemNumber, quantity, and cost to zero.
Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.0;
}

//Precondition: none
//Postcondition: initialize itemNumber, quantity, and cost with provided values.
Inventory::Inventory(int newItemNumber, double newCost, int newQuantity)
{
	itemNumber = newItemNumber;
	quantity = newQuantity;
	cost = newCost;
}

//Precondition: newItemNumber MUST be positive
//Postcondition: set itemNumber to the newItemNumber
void Inventory::setItemNumber(int newItemNumber)
{
	// Optionally add validation for positive numbers
	if (newItemNumber >= 0)
	{
		itemNumber = newItemNumber;
	}
}

//Precondition: none
//Postcondition: return itemNumber
int Inventory::getItemNumber() const
{
	return itemNumber;
}

//Precondition: newQuantity MUST be positive
//Postcondition: set quantity to the newQuantity
void Inventory::setQuantity(int newQuantity)
{
	// Optionally add validation for positive numbers
	if (newQuantity >= 0)
	{
		quantity = newQuantity;
	}
}

//Precondition: none
//Postcondition: return quantity
int Inventory::getQuantity() const
{
	return quantity;
}

//Precondition: newCost MUST be positive
//Postcondition: set cost to the newCost
void Inventory::setCost(double newCost)
{
	// Optionally add validation for positive cost
	if (newCost >= 0.0)
	{
		cost = newCost;
	}
}

//Precondition: none
//Postcondition: return cost
double Inventory::getCost() const
{
	return cost;
}

//Precondition: none
//Postcondition: return total cost = cost * quantity
double Inventory::getTotalCost() const
{
	return cost * quantity;
}