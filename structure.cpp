#include<iostream>
using namespace std;

struct student
{
    private:
    int rollno=1;
    public:
    void print()
    {
        cout<<"Roll No: "<<rollno<<endl;
    }
};
int main()
{
    student s1;
    s1.print();
    return 0;
}