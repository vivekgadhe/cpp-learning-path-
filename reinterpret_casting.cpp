#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << a << endl;

    char *ch = reinterpret_cast<char *>(ptr);

    *ch = 'a';
    cout << a << endl;
}