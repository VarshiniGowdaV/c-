#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(int speed, string color) : speed(speed), color(color)
{
    cout << "Vehicle contructor." << endl;
}

Vehicle::~Vehicle() {
    cout << "Vehicle distructor." << endl;
}

void Vehicle::start() {
   // cout << "Vehicle is starting." << endl;
}

void Vehicle::stop() {
    //cout << "Vehicle is stopping." << endl;
}
