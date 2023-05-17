#include "car.hpp"

int main()
{
    car myCar(2018, "Honda", 0);
    myCar.getvalue();
    for (int i = 0; i < 5; i++)
    {
        cout << "\nAccelerating " << i+1 << endl;
        myCar.accelerate();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\nBreaking " << i+1 << endl;
        myCar.brake();
    }
}
