#include<iostream>
using namespace std;

int c=45;

int main(){
    /**********************************build in data type************************************/
    int a,b,c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;//read the line given below it is very usefull
    cin>>b;

     c=a+b;
    cout<<"The sum of number is "<<c<<endl; 
    cout<<"The global of c is "<<::c<<endl;/*if you want the complier to understand that you want to print(cout)
   the value that you have declare in globle then the operator used in that situation is scope 
   resolution operator( :: ) */

   /**********************typing casting****************************************/
   int x=45;
   float y=45.56;   

   cout<<"The value of x is "<<(float)x<<endl;
   cout<<"The value of y is "<<(int)y<<endl;

   cout<<"The value of x is "<<float(x)<<endl;/*This is usefull for changing value of variable through their 
   data type*/
   cout<<"The value of y is "<<int(y)<<endl;
   

   cout<<"The expression is "<<x + y<<endl;
   cout<<"The expression is "<<x + (int)y<<endl;
   cout<<"The expression is "<<x + int(y)<<endl;
 
  return 0;
}
