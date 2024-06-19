#include<iostream>
using namespace std;

class A
{
    public:
        void putdata(){
            cout<<"Class A "<<endl;
        }
};

class B : public A
{
    public:
    void display(){
        cout<<"Class B "<<endl;
    }
};

class C
{
    public:
    void message(){
        cout<<"Class C "<<endl;
    }
};

class D : public B, public C
{
    public:
    void print(){
        cout<<"inside class D "<<endl;
    }
};
int main(){
    D ob;
    ob.putdata();
    ob.display();
    ob.message();
    ob.print();
    return 0;
}