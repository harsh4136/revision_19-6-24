#include<iostream>
using namespace std;
int sum(int a , int b){          //if we use int data type instead of void function we have declare variable like (int a, int b) .
    int c = a+b;                 //also example in boop class notes.
    return c;          //it is important to type return c; otherwise the sum will be 0. which is wrong
}            //when we return c; then the value in c is given to the main function and then it gives us answer.
int main(){
    int num1, num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    
    cout<<"The sum of number is: "<<sum(num1, num2);       //sun(num1, num2);

    return 0;
}
