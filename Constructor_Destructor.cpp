#include<iostream>
using namespace std;

class abc{
    int a;
    int b;
    public:
    abc(int x, int y){
        a = x;
        b = y;
        cout << " The Object is created " << endl;
    }
    void getdata(){
        cout<< a << b << endl;
    }

};
int main(){
    abc ob(1,2);
    ob.getdata();
        return 0;
}