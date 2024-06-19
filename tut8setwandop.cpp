#include<iostream>

// There are total nine types of manipulator . If you want to use them you have to declare new header file given below.
#include<iomanip>         //new header file
using namespace std;
 int main(){
    int a=3, b=78, c=1233;

    /******************manipulators in c++******************/
    //manipulators are of many type you can see in boop class notes.

    cout<<"The value of a  setw is: "<<setw(4)<<a<<endl;  /*It is use to have a space in output .  as we can set it by
    our own. */                   //run and then see the differance between setw and without it.
    cout<<"The value of b  setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c  setw is: "<<setw(4)<<c<<endl;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    //operator precedence 
    /*In this we don't have to use board mass for arithmetic solution*/
    // for example:
    //int a=3, b=4;
    //int c=a*5+b;
    // then int c=(a*5)+b; because according to rules the *,/,% high associated.
    //and then it comes subration and addition after *,/,%.  

    //lets take another example
    //  int c=(a*5)+b-45+87;          //Important information;
    //  int c=((((a*5)+b)-45)+87)     //because we have to evalute them from left to right

    //cout<<c;

   return 0;
}

