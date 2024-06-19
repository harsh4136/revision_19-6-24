#include<iostream>
using namespace std;
typedef struct employee
  {
      /*  data  */    
    int eld;           //4      //it uses total 9 memory;
     char favchar;     //1
     float salary;     //4
  } ep;

union money
{
    /*  data  */                 //it is used for better memory managment
    int rice;   //4              // we have to take only maximum memory because it uses only one time;
    char car;   //1              //it saves our memory;
    float pounds;  //4           //we can use only one ;  
};


int main(){
    //example of enum;
    enum Meal{ breakfast, lunch, dinner};        //now breakfast is become our datatype,
                                                // so look in another way;
    Meal m1 = breakfast;       //if we write lunch instead of breakfast then we will get output 1.  
    cout<<m1;            //if we write (m1==2) then the output will be 0 because the condition is false.
    // cout<<breakfast; 
    //cout<<lunch;
    //cout<<dinner;

    //ep harry;                      //this is an example of union
    //union money m1;
    //m1.rice = 34;
    //m1.car = 'c';
    //cout<<m1.rice<<endl;           //it will print me garbage value;
    //cout<<m1.car;                  //it will print me right value 'c';
    
    return 0;
}