#include "Product.h"

Product::Product()
{
	this->name = "Chips";
	this->cost = 200;
	this->weight = 2;
}

Product::Product(string name, float cost, float weight)
{
	/*if (name.empty())
	{
		this->name = "NoName";	
	}
	else
	{
		this->name = name;
	}*/
	this->name = name.empty() ? "NoName" : name;
	this->cost = cost>0 ? cost : 0;
	this->weight = weight >0 ? weight : 0;
	/*if (cost > 0)
	{
		this->cost = cost;
	}
	else
	{
		this->cost = 0;
	}
	if (weight > 0)
	{
		this->weight = weight;
	}
	else
	{
		this->weight = 0;
	}*/
}

void Product::setName(string name)
{
	if (!name.empty())
	{
		this->name = name;
	}
}

string Product::getName() const&
{
	return this->name;
}

void Product::setCost(float cost)
{
	if (cost>0)
	{
		this->cost = cost;
	}
}

float Product::getCost() const&
{
	return this->cost;
}

void Product::setWeight(float weight)
{
	if (weight > 0)
	{
		this->weight = weight;
	}
}

float Product::getWeight() const&
{
	return this->weight;
}

void Product::showInfo() const&
{
	cout << "Name: " << this->name << endl;
	cout << "Cost: " << this->cost << endl;
	cout << "Weight: " << this->weight << endl;
	cout << "-------------------------\n" << endl;
}
