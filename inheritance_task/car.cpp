#include "Car.h"
#include <iostream>
#include "vehicle.h"
using namespace std;

Car::Car(int speed, string color, int number_of_doors)
    : Vehicle(speed, color), number_of_doors(number_of_doors)
{
     std::cout<<"car constructor"<<std::endl;
}
Car::~Car()
{
    std::cout<<"car disstructor"<<std::endl;
}
void Car::playMusic()
{
    //cout << "Playing music in the car." << endl;
}
