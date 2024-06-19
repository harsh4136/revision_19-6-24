#include<iostream>
using namespace std;
                                    //we can also use typedef;
                                    //typedef struct employee
                                    //  {
                                    //     /*  data  */    
                                    //      int eld;
                                    //      char favchar;
                                    // float salary;
                                    //  } ep;
struct employee
{
    /* data */
    int eId; 
    char favChar;                   // after using typedef we don't have to write full struct employee;
    float salary;                   // we can write only ep.       like ep harry;
};
int main(){
    struct employee harry;   //we can also make another ex.. like struct employee rohan;,etc;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl;
    
    return 0;
}