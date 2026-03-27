#include<iostream>
using namespace std;

template<typename LMT>
void addition (LMT a, LMT b){
    cout << a + b << endl;
}

template < typename Last >

class abc{
    Last num;
    public:
    void setData(Last n){
        num = n;
    }
    Last getData(){
        return num;
    }
};

int main() {
    abc < int > ob;

    abc < string > ob1;

    ob.setData(14);
    ob1.setData("Last Moment Tuition");
    cout << ob.getData() << endl;
    cout << ob1.getData() << endl;
}