#include <iostream>
using namespace std;

class car{
public:
    virtual void steeringWheel() = 0;
    virtual void fourWheel() = 0;
};

class alto : public car
{
public:
    void steeringheel()
    {
        cout << "Power Steering" << endl;
    }
    void fourWheel()
    {
        cout << "MRF" << endl;
    }
};

int main()
{
    alto ob;
    ob.fourWheel();
    ob.steeringWheel();
}
