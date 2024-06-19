#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void getdata(int x, int y){
            a = x;
            b = y;
        }
        void sum(complex o1,complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void edit(){
            cout<<"The sum of complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
int main(){
    complex c1 , c2, c3;

    c1.getdata(1,2);
    c1.edit();

    c2.getdata(3,4);
    c2.edit();

    c3.sum(c1,c2);
    c3.edit();

    return 0;
}