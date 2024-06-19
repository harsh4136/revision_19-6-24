// Develop Program using Inline Functions.
#include<iostream>
using namespace std;

inline int fun(int a, int b){
    return (a>b)? a:b;
}
int main(){
    int a=10, b=20;
    cout<<"Max value is : "<<fun(a,b);
    return 0;
}