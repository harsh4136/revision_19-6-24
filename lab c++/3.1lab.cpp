// Develop Program using Call by Reference.
#include<iostream>
using namespace std;

void swap(int &a, int &b){
int temp=a;
a=b; 
b=temp;
}
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
    
    return 0;
}