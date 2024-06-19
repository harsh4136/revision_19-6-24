#include<iostream>
using namespace std;

class demo{
    int feet;
    float inch;
    public:
        demo(){
            feet = 2;
            inch = 2.25;
        }
        demo(int value){
            feet =value;
            inch = value;
        }
        demo(int data1, float data2){
            feet = data1;
            inch = data2;
        }
        void show(){
            cout<<"Feet = "<<feet<<endl;
            cout<<"Inch = "<<inch<<endl;
        }
};
int main(){
    demo d1;
    demo d2(3);
    demo d3(4,4.5);

    d1.show();
    d2.show();
    d3.show();
    return 0;
}