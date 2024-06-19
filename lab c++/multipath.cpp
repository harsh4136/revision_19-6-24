// There will be an error in this code that a is ambiguous.
#include<iostream>
using namespace std;

class A
{
    public:
        int a;
};

class B : public A
{
    public:
        int b;
};

class C : public A
{
    public:
        int c;
};

class D : public C , public B
{
    public:
        int d;
};
int main(){

    D ob;
    cout<<ob.d<<endl;
     cout<<ob.c<<endl;
      cout<<ob.a<<endl;
    return 0;
}