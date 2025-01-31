#include <iostream>
#include "AC.h"
#include "Switch.h"
#include "Wire.h"
#include <string>
using namespace std;

int main()
{
    AC a1(1,10,10,16000,280,"voltas","white");
    a1.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b1(20, 30, 1, 1500, 400, "HIFI", "white");
    b1.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c1(40, 4.3, 300, "Havells", "red");
    c1.wire();
    cout << "***************************************" << endl;

    AC a2(2,10,10,16000,280,"voltas","white");
    a2.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b2(20, 30, 2, 1500, 400, "HIFI", "white");
    b2.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c2(40, 4.3, 300, "Havells", "red");
    c2.wire();
    cout << "*****************************************" << endl;

    AC a3(3,10,10,16000,280,"voltas","white");
    a3.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b3(20, 30, 3, 1500, 400, "HIFI", "white");
    b3.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c3(40, 4.3, 300, "Havells", "blue");
    c3.wire();
    cout << "*****************************************" << endl;

    AC a4(4,10,10,16000,280,"voltas","white");
    a4.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b4(20, 30, 4, 1500, 400, "HIFI", "white");
    b4.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c4(40, 4.3, 300, "Havells", "yellow");
    c4.wire();
    cout << "*****************************************" << endl;

    AC a5(5,10,10,16000,280,"voltas","white");
    a5.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b5(20, 30, 5, 1500, 400, "HIFI", "white");
    b5.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c5(40, 4.3, 300, "Havells", "green");
    c5.wire();
    cout << "*****************************************" << endl;

    AC a6(6,10,10,16000,280,"voltas","white");
    a6.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b6(20, 30, 6, 1500, 400, "HIFI", "white");
    b6.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c6(40, 4.3, 300, "Havells", "black");
    c6.wire();
    cout << "*****************************************" << endl;

    AC a7(7,10,10,16000,280,"voltas","white");
    a7.ac();
    cout<<"------------------------------------------"<<endl;
    Switch b7(20, 30, 7, 1500, 400, "HIFI", "white");
    b7.switch1();
    cout<<"------------------------------------------"<<endl;
    Wire c7(40, 4.3, 300, "Havells", "blue");
    c7.wire();
    cout << "*****************************************" << endl;
    return 0;
}
