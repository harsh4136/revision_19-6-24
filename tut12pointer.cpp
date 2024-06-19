#include<iostream>
using namespace std;
int main(){
    // what is a pointer? ---> Data type which holds the address of other data types
    int a=3;
    int* b= &a;  //also   int* b;
                 //       b = &a;
    // & --->  (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;    //for understanding;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer                     //this is not very useful, but try to understand;

    int** c =&b;  
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}