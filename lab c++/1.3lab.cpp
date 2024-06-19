// WAP to find Maximum of 2 no using cin and cout.
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    if(a>b){
        cout<<"A is maximum ";
    }
    else{
        cout<<"B is maximum";
    }
    return 0;
}