#include<iostream>
using namespace std;

class Employee
{
    private:
    int a, b, c;
    public:
    int d,e;

    void setdata(int a1, int b1, int c1);//Delcaration of member function.

    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};      //Don't forget to put semicolon at the end of class.

void Employee :: setdata(int a1, int b1, int c1){      //In this line we have use scope resolution operator(::), to take access of member function which we have delcare in class.
    a = a1;
    b = b1;
    c = c1;
}
int main(){
      //If I will have not given the value of d and e then the output value of d and e is garbage value ; 

    Employee harsh;
    harsh.d=23;        //Here I have given the value of d and e
    harsh.e=24;
    harsh.setdata(6,7,8);
    harsh.getdata();

    return 0;
}