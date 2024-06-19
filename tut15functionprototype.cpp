//function prototype   , is can be asked in exam ;
//prototype gives assorite that check forward that this function is available;
//therefore it is used whenever we want to use another function after the main function;

#include<iostream>
using namespace std;
     //////////  type function-name (arguments); //////////////   
int sum(int a,  int b);     //-->Acceptable
//int sum(int a,  b);         //-->Not Acceptable
int sum(int, int);          //-->Acceptable
//void g(void);       //it is optional to write void like(  g(void) );
void g(); 
int main(){
    int num1, num2;
    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
 //// num1 and num2 are actual parameters////////   
    cout<<"The sum of number is: "<<sum(num1, num2)<<endl;
    g();          //given below;
    return 0;
} 
int sum(int a , int b){
///// Formal Parameters a and b will be taking values from actual
//parameters num1 and num2.  //////////
    int c = a+b;
    return c;          //it is important to type return c; otherwise the sum will be 0. which is wrong
}                 //when we return c; then the value in c is given to the main function and then it gives us answer.         

void g(){
    for(int i=0; i<=10;i++)               //we declare void at above;
    {                                     //we also have to declare void in our main function
    cout<<"Hello, Good Morining"<<endl;   //like  g(); 
    }
} 
// Using void function you don't have write return keyword
// But if you are using int function you have use (return keyword) to return the value to the main function