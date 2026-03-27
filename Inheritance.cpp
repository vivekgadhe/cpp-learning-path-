#include <iostream>
using namespace std;

class android
{
protected:
    int version = 13;

public:
    void os()
    {
        cout << "I am stack android version " << version << endl;
    }
};
class oneUI : public android
{
public:
    void showAndversion()
    {
        cout << "I am oneUI version " << version << endl;
    }
};

int main()
{
    oneUI s23;
    s23.showAndversion();
}