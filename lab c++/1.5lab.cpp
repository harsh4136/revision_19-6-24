// WAP to find Positive, Negative and Zero number using cin and cout.
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(number>0)
    {
        cout<<"The given number is positive ";
    }
    else if(number<0)
    {
        cout<<"The given number is negative ";
    }
    else{
        cout<<"The given number is zero ";
    }

    return 0;
}