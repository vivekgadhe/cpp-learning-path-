#include <iostream>
using namespace std;

class abc
{
public:
    int a = 5;

    abc operator+(abc ob)
    {
        abc temp;
        temp.a = a + ob.a;
        return temp;
    }
};

int main()
{
    abc ob1;
    abc ob2;

    // abc ob3 = ob1.addobjects(ob2);

    abc ob3 = ob1 + ob2;

    cout << ob1.a << endl;
    cout << ob2.a << endl;
    cout << ob3.a << endl;
}