// Develop Program using Function Overloading.
#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
float sum(float x, float y)
{
    return x + y;
}
int main(){
    int sum1= sum(10,20);
    cout<<"Sum = "<<sum1<<endl;
    float sum2= (10.10,20.20);
    cout<<"Sum = "<<sum2;
    return 0;
}