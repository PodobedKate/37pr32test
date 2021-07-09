#pragma once
#include "Product.h"
class Buy :
    public Product
{
    int amount;

public:
    Buy();
    Buy(string name, float cost, float weight,int amount);
    Buy(Product p, int amount);

    void setAmount(int amount);
    int getAmount()const&;

    float calcTotalCost()const&;
    float calcTotalWeight()const&;

    void show()const&;
};

