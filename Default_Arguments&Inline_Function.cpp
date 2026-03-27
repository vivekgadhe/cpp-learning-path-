#include<iostream>
using namespace std;

class Calculator{
    public:
    inline int sum(int a = 0, int b = 0, int c = 0){
        return a + b + c;
    }
};
int main(){
    Calculator ob;
    cout << ob.sum(1,2) << endl; // Output: 3
}
