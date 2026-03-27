#include <iostream>
using namespace std;

class base
{
    virtual void fun()
    {
    }
};
class d1 : public base
{
};
class d2 : public base
{
};
int main()
{
    base *ptr = new d1();
    d1 *d = dynamic_cast<d1 *>(ptr);

    if (d == nullptr)
    {
        cout << "Not Work" << endl;
    }
    else
    {
        cout << "Work" << endl;
    }
}
