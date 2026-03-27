#include <iostream>
using namespace std;

class a
{
public:
    virtual void show()
    {
        cout << "This is class a" << endl;
    }
};

class b : public a
{
public:
    void show()
    {
        // function overriding
        cout << "This is class b" << endl;
    }
};

int main()
{
    b ob;
    a *pt = &ob;
    ob.show();
    pt->show();
}