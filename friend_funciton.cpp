#include<iostream>
using namespace std;

class number{
    int a, b;
    public:
        friend int sum(void);
};

int sum(void){
    number s;
    int temp;
    s.a = 10;
    s.b   = 20;
    temp = s.a + s.b;
    return temp;
};
int main(){
    int result;
    result = sum();
    cout<<result;
    
    return 0;
}