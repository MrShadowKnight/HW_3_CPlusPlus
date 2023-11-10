#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Vehicle
{
private:

public:
    virtual void start() {
        cout << "Starting the engine of the vehicle" << endl;
    }

    virtual void stop() {
        cout << "Stopping the engine of the vehicle" << endl;
    }
};

