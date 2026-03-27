#include <iostream>
using namespace std;

class a
{
public:
    void print()
    {
        cout << "I am from a class a " << endl;
    }
};

class b : public a
{
    // derived from a
public:
    void print()
    {
        cout << "I am from b class b " << endl;
    }
};
class c : public b
{
    // derived from b
public:
    void print()
    {
        cout << "I am from c class c " << endl;
    }
};
int main()
{
    c ob;
    ob.print();
}
