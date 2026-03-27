#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int result = 0;
    try
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
        if (b == 0)
        {
            throw runtime_error("");
        }
        result = a / b;
    }
    catch (int x)
    {
        cout << "You have enterend zero value of b" << endl;
    }
    catch (...)
    {
        cout << "This is second catch block" << endl;
    }
    cout << "The result should be shown" << result << endl;
}