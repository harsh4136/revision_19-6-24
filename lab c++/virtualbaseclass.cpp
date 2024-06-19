#include<iostream>
using namespace std;

class A
{
    public:
        int a;
};

class B : virtual public A
{
    public:
        int b;
};

class C : virtual public A
{
    public:
        int c;
};

class D : public B , public C
{
    public:
        int total;
};

int main(){
    D dl;
    dl.a = 10;
    dl.b = 20;
    dl.c = 30;

    dl.total = dl.a + dl.b + dl.c;
    cout<<"Total is  = "<<dl.total;

    return 0;
}