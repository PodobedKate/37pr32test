#pragma once
#include "Buy.h"
#include <fstream>
class Check :
    public Buy
{
public:
    Check(Buy b);

    void print()const&;
};

