//Example of recursions functions
// It is not neccesary to use it also 
#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n - 1);
}

 ///  step by bstep calculation of factorial(4)  ///
      // factorial(4) = 4* factorial(3);
      // factorial(4) = 4* 3 * factorial(3);
      // factorial(4) = 4* 3 * 2 * factorial(3);
      // factorial(4) = 4 * 3 * 2 * 1 ;
      // factorial(4) = 24;
int main(){
    // Factorial of a number;
    // 6! = 6*5*4*3*2*1 =720
    // 0! = 1 by definition
    // 1! = 1 by definition 
    // n! = n * (n-1)!

    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
     cout<<"The factorial of a given number is "<<factorial(a);

    return 0;
}