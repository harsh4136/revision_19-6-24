#include<iostream>
using namespace std;

class base
{
    int b = 10;
    public:
        virtual void getdata(){       // using virtual keyword
            cout<<"The value in base class is "<<b;
        }
};

class derived : public base
{
    int d = 20;
    public:
        void getdata(){
            cout<<"The value in derived class is "<<d;
        }
};

int main(){
    base *c;      // making an pointer of base class

    base obj_base;            // making objects of base class and derived class 
    derived obj_derived;

    c = &obj_base;              // phasing the pointer towards base class

    c -> getdata();       // printing the data from base class
    return 0; 
}