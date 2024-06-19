// WAP to find Addition, Substraction, Division using cin and cout.
#include<iostream>
using namespace std;
 
 int main(){
    int a, b, c;
    cout<<"Enter the first value ";
    cin>>a;
    cout<<"Enter the second value";
    cin>>b;

    c = a + b;
    cout<<"Addition of two number's is : "<<c<<endl;

    c = a - b;
    cout<<"Substraction of two number's is : "<<c<<endl;

    c = a/b;
    cout<<"Dvivision of two number's is : "<<c<<endl;

    return 0;
 }