#include<iostream>
using namespace std;
int main(){
    /* for loop in c++
    There are three types of loops in c++:
        1. For loop
        2. While loop
        3. do-while
    */
   //Syntax for for loop
   //for(initialization; condition; updation)
   // {
   //    loop body(C++ code)l
   // }
   
    for( int i = 1;i<=40;i++)             //example of for loop.
    {
        /*  code  */
        cout<<i<<endl;   //we can do infinite loop
                         //but we should avoid this because it will consume 
    }                    //all our memory of pc.


    return 0;
     
     /* While loop in c++ */
     // syntax:
     // int i=0;                  //initialization
     // while(condition)          //condition
     // {
     //      c++ statements;
     //      i++;                 //updation
     // }  
     /* Example:                       //example of while loop.

     int i =10;    //we can also take value from user.     
     while(i<=40){
        cout<<i<<endl;       //we can also do infinite while loop
        i++;                 //like:   while(true)
     }                       //the condition is true so the loop will go to infinte;                  
     */   

    /* do while loop in C++*/
      //syntax:
      // do 
      // {
      //      c++ statements;
      //      i++;
      //  }while(condition);   //remember to put semicolan after while condition.  

    //example
    /*   int i=1;
         do{                           ///example of do-while loop;
            cout<<i<<endl;
            i++;
         }while(i<=40);       //keep in mind to put semicolan     
     
 /////////////        note: If the condition is false( while(false) )        ///////////////////
             // then also the program will run for one time;
             //this is benifit of do-while loop.
             //it will print only 1 and then it will stop becausae condition is false;
     */
        

      
}