#include "DeliveryTruck.h"
#include <iostream>
using namespace std;

DeliveryTruck::DeliveryTruck(int speed, string color, int number_of_doors, int cargo_capacity, string delivery_area)
    : Car(speed, color, number_of_doors), Truck(speed, color, cargo_capacity), Vehicle(speed,color)
{
}

void DeliveryTruck::scheduleDelivery() {
    //cout << "Scheduling delivery in the area: " << delivery_area << endl;
}
