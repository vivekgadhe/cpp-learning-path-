#include <iostream>
using namespace std;

class b
{
    virtual void fun()
    {
    }
};
class derived : public b
{
};

int main()
{
    b *ptr = new derived();
    const type_info &t = typeid(*ptr);

    derived d;
    const type_info &deri = typeid(d);

    cout << t.name() << endl;
    cout << deri.name() << endl;
}
