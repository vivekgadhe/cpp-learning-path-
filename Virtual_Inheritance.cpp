#include <iostream>
using namespace std;

class a
{
public:
    void print()
    {
        cout << " I am from a class " << endl;
    }
};
class b : virtual public a
{
};
class c : virtual public a
{
};
class d : public b, public c
{
};
int main()
{
    d ob;
    ob.print();
}