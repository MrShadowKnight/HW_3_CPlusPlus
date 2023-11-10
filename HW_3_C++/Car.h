#pragma once
#include <iostream>
#include <math.h>
#include "Vehicle.h"

using namespace std;

class Car : Vehicle
{
private:

public:
    void start() override {
        cout << "Starting the engine of the car" << endl;
        cout << "Checking fuel level and adjusting mirrors" << endl;
    }

    void stop() override {
        cout << "Stopping the engine of the car" << endl;
        cout << "Applying parking brake and turning off lights" << endl;
    }
};

