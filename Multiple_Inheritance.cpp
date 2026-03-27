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

class b
{
public:
    void print()
    {
        cout << "I am from b class " << endl;
    }
};
class c : public a, public b
{
    // derived from a and b
public:
    void print()
    {
    }
};
int main()
{
    c ob;
    ob.a::print();
}