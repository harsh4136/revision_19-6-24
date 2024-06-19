// Develop Program using Default Arguments.
#include<iostream>
using namespace std;

int sum(int a, int b, int c=30){
    return a + b + c;
}
int main(){
    int a = 10, b = 20;
    cout<<"Sum of number's is : "<<sum(a,b);
    return 0;
}