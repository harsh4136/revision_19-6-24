// solving fibonacci series by recursions function; 
// it giver overhead so it is not neccesary to use recursion function every time;
// you can put simple formula for. 
#include<iostream>
using namespace std;

int fib(int a){
    if(a<2){
        return 1;
    }
    return fib(a-2) + fib(a-1);
}

int main(){
    
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;

    cout<<"The term in fibonacci sequence at position "<<a<< " is "<<fib(a)<<endl;
    return 0;
}