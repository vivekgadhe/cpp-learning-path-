#include <iostream>
using namespace std;

class person
{
public:
    int id;
    string name;
    static int totalcount;
    person(int i, string n)
    {
        id = i;
        name = n;
        totalcount++;
    }
    void getdata()
    {
        cout << id << endl;
        cout << name << endl;
    }
    static void getTotalCount()
    {
        cout << "Total Count: " << totalcount << endl;
    }
};
int person::totalcount = 0;

int main()
{
    person ob(12, "Ram");
    person ob1(13, "Sham");

    person ::getTotalCount();
}
