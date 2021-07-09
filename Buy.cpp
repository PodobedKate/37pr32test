#include "Buy.h"

Buy::Buy()
{
	this->amount = 1;
}

Buy::Buy(string name, float cost, float weight, int amount)
	:Product(name,cost,weight)
{
	this->amount = amount > 1 ? amount : 1;
}

Buy::Buy(Product p, int amount)
	:Product (p)
{
	this->amount = amount > 1 ? amount : 1;
}

void Buy::setAmount(int amount)
{
	if (amount > 0)
	{
		this->amount = amount;
	}
}

int Buy::getAmount() const&
{
	return this->amount;
}

float Buy::calcTotalCost()const&
{
	return amount*this->getCost();
}

float Buy::calcTotalWeight()const&
{
	return this->getWeight()*amount;
}

void Buy::show() const&
{
	Product::showInfo();
	cout << "Sum weight: " << calcTotalWeight() << endl;
	cout << "Sum price: " << calcTotalCost() << endl;
	cout << "Amount: " << this->amount << endl;
}
