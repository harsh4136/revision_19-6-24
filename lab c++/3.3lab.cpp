// Develop Program using Return by Reference.

#include <iostream>
using namespace std;
int num=5;
int& test(); 
int main()// Function declaration int main )(
    {
        test();
        cout << num; 
        return 0;
    }   
int& test()
{
return num; 
}