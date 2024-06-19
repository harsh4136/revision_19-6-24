#include<iostream>
using namespace std;

class demo{
    int a;
    public:
        void getdata(int x){
            this ->a=x;
            cout<<"The value of a is"<<a;
        }

};
int main(){
    demo b;
    b.getdata(2);
    return 0;
}