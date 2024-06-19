#include<iostream>
using namespace std;
int glo=23;

void sum(){
    int a;
    cout<<glo;          //scope resolution operator
     /*Their is also an operator used to print value of global value it is called scope resolution
    operator ( :: ). */
    
}
int main()
{
    int glo=9;
    glo=78;
    sum();
    cout<<glo;
    return 0;

}