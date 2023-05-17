
#include <string>
#include <iostream>
using namespace std;

class car
{
private:
    int releaseYear;
    string customerName;
    float speed;

public:
    void getvalue();
    void accelerate();
    void brake();
    car (int ry, string cn, float s): releaseYear(ry), customerName(cn), speed(s){
        cout<<"\nInitializing object with below values\n";
        cout<<"-------------------------------------\n";
    }
};

void car::getvalue()
{
cout << "Release Year: " << releaseYear << endl;
cout << "Customer Name: " << customerName << endl;
cout << "Initial speed of the car: " << speed << endl;
}

void car::accelerate()
{
    speed=speed+10;
    cout << "Current speed of the car: " << speed << endl;
}

void car::brake()
{
    speed=speed-10;
    cout << "Current speed of the car: " << speed << endl;
}
