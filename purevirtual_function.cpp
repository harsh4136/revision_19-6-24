#include<iostream>
using namespace std;

class base
{
    int a = 10;
    public:
        virtual void getdata() = 0;
};

class derived : public base
{
    int b = 20;
    public:
    
    void getdata() {
        cout<<"The value in derived class is = "<<b;
    }
};
int main(){

    base *c;

    // base obj_base;   we cannot make the object of and base class because it is an abstract class , as it has pure virtual function in it.
    derived obj_derived;

    c = &obj_derived;

    c->getdata();

    return 0;
}