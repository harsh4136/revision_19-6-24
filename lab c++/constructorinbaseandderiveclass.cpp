#include<iostream>
using namespace std;

class A 
{
    protected:
        int a;
        public:
        A(int x)
        {
            a = x;
        }
        void display(){
            cout<<"A = "<<a;
        }
};
class B
{
    protected:
        int b;
        public:
             B(int y)
             {
                b = y;
             }
             void putdata(){
                cout<<"B = "<<b;
             }
};
class C : public A , public B
{
    int c;
    public:
         C(int p, int q, int r)
         {
                c = r;
         }
         void show(){
            cout<<"C = "<<c;
         }
};
int main(){
    c aa;
    aa.display();
    aa.putdata();
    aa.display():
    return 0;
}