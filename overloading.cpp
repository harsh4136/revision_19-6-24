#include<iostream>
using namespace std;

int area(int s){
    return s*s;
}

int area(int l , int b){
    return l*b;
}

float area(float r , float p){
    return p*r*r;
}

int main(){
    cout<<"The area of sqaure is "<<area(5);
    cout<<"The area of rectange is "<<area(4,5);
    cout<<"The area of circle is "<<area(2,3.14);
}