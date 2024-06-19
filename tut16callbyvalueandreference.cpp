//  call by value and call by refrence. //
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap(int a, int b){
    int temp = a;        //for swapping number.
    a = b;
    b = temp;
}

// Call by reference using pointer.
void swapPointer(int* a, int* b){    // In this we have to change value from a to b.
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using  c++ reference variables
// int &
void swapReferenceVar(int &a, int &b){    // In this we have to change value from a to b.
    int temp = a;
    a = b;
    b = temp;
    // return 0;    // This is use to enter our own value in an variable;
}

int main(){
    int a=4, b=5;
    //cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
   // swap(a,b);  // This will not swap a and b
   //swapPointer(&a,&b);  //This will swap a and b using pointer reference.
   swapReferenceVar(a,b);  //This will swap a and b using reference variavles.
  // swapReferenceVar(a,b) = 766;  //This will swap a and b using reference variavles.
  // upper line is not very important It's just for understanding.  
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}