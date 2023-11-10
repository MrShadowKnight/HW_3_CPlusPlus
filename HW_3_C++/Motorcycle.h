#pragma once
#include <iostream>
#include <math.h>
#include "Vehicle.h"

using namespace std;

class Motorcycle : Vehicle
{
private:

public:
    void performStunts() {
        cout << "Performing acrobatic stunts on the motorcycle" << endl;
    }
};

