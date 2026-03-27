#include<iostream>
using namespace std;

class car{
    //properties
    int model;
    string name;
    int noofWheels;
    int noofMirrors;

    public:
    //behavior
    void cameraWorking()
    {
        cout<<"Camera is Working"<<endl;
    }
};
int main()
{
    car alto;
    alto.cameraWorking();
    return 0;
}