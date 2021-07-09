#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
	string name;
	float cost;
	float weight;
public:
	Product();
	Product(string name, float cost, float weight);

	void setName(string name);
	string getName()const&;
	void setCost(float cost);
	float getCost()const&;
	void setWeight(float weight);
	float getWeight()const&;

	void showInfo()const&;



};

