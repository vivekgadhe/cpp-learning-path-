#include <iostream>
using namespace std;

class abc
{
    int a;

public:
    abc(int val)
    {
        a = val;
    }
    abc(abc &ob)
    {
        a = ob.a;
    }
    void showData()
    {
        cout << a << endl;
    }
};
int main()
{
    abc ob1(10);
    abc ob2 = ob1;

    ob1.showData();
    ob2.showData();
}