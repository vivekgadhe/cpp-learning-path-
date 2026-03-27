#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    const int *ptr = &a;
    //*ptr = 12;
    cout << a << endl;
    int *pt = const_cast<int *>(ptr);
    *pt = 12;
    cout << a << endl;
}