#include<iostream>
using namespace std;

class Employee{
    int id;
    string name;

    public:
    void setdata(){
        cout << "Enter the value of id and name: ";
        cin >> id >> name;
    }
    void getData(){
        cout << "The id is:-" << id << endl;
        cout << "The name is:-" << name << endl;
    }
};
int main(){
    Employee emp[3];
    for (int i = 0; i < 3; i++){
        emp[i].setdata();

    }
    for(int i = 0; i < 3; i++){
        emp[i].getData();
    }
}