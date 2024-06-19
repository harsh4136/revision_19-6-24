//  Develop Program using Scope Resolution Operator.
#include <iostream>
using namespace std;
// Define a global variable
int globalVar = 20;

int main() {
    int a = 10;
   cout<<"local vaiable is : "<<a<<endl;
    cout<<"Global variable is : " << ::globalVar<<endl;

    return 0;
}
