#include<iostream>
using namespace std;

class Suresh{
    string topsecret= "Top Secret Information";

    friend class sham;
};
class sham{
    public:
    void getTopSecret(Suresh ob){
        cout << "The top secret information is : " << endl;

    }
};
int main(){
    Suresh ob1;
    sham ob2;

    ob2.getTopSecret(ob1);
}