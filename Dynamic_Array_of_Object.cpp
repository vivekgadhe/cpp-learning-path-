#include <iostream>
using namespace std;

class employee
{
    string name;
    int id;

public:
    void setData()
    {
        cout << "Enter the value of id: " << endl;
        cin >> id;
        cout << "Enter the value of name: " << endl;
        cin >> name;
    }
    void getData()
    {
        cout << "The id is:- " << id << endl;
        cout << "The name is:- " << name << endl;
    }
};

int main()
{
    employee *ptr = new employee[3];
    for (int i = 0; i < 3; i++)
    {
        ptr[i].setData();
    }
    for (int i = 0; i < 3; i++)
    {
        ptr[i].getData();
    }
    delete[] ptr;
}
