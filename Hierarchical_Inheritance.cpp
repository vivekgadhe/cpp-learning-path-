#include <iostream>
using namespace std;

class a
{
public:
    void print()
    {
        cout << "I am from a class " << endl;
    }
};

class b : public a
{
public:
    void showB()
    {
        cout << "I am from b class " << endl;
    }
};

class c : public a
{
public:
    void showc()
    {
        cout << " I am from c class " << endl;
    }
};

int main()
{
    b ob;
    ob.print();
    ob.showB();
}
