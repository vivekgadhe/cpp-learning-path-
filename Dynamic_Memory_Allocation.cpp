#include <iostream>
using namespace std;

void changeValue(int &value)
{
    value++;
}
int main()
{
    int a = 4;
    // int and name= a;
    cout << a << endl;
    changeValue(a);
    cout << a << endl;
    // cout << name << endl;
}