#include<iostream>
using namespace std;

class car{
    int model;
    string name;
    string brand;
    string color;
    
    public:
    //Mutators
    void setData(int m, string n, string b, string c){
        model = m;
        name = n;
        brand = b;
        color = c;
    }
    //Inspectors
    int getModel(){
        return model;
    }
    //Facilitators
    void report(){
        cout<<"This car is manufactured by"<<brand<<" and its name is" << name <<" and there model No.is"<<model<< "and this car's color is "<<color<<endl;

    }
};
int main(){
    car alto;
    alto.setData(2015,"Alto","Suzuki","White");
    alto.report();
    car swift;
    swift.setData(2018,"Swift","Suzuki","Red");
    swift.report();
}

