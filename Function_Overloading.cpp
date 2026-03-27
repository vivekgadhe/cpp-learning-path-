#include<iostream>
using namespace std;

class addition{
    public:
    void add (int a, int b){
        cout << a + b << endl;
    }
    void add (float a, float b){
        cout << a + b << endl;
    }
};
int main(){
    addition ob;
    ob.add(10, 20);
    ob.add(10.5f, 20.5f);
}