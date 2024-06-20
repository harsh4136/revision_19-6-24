#include<iostream>
using namespace std;

class mann{
    public:
        void print_myInfo() {
            cout<<"Helo my name is mann bhalodiya i am studing in diploma";
        }
};
class demo{
    int ft;
    float inch;
    public:
        demo(){
            ft = 2;
            inch = 2.25;
        }
        demo(int value){
            ft =value;
            inch = value;
        }
        demo(int data1, float data2){
            ft = data1;
            inch = data2;
        }
        void show(){
            cout<<"Feet = "<<ft<<endl;
            cout<<"Inch = "<<inch<<endl;
        }
};

int main(){
    mann m;
    
    demo d1;
    demo d2(3);
    demo d3(4,4.5);
    m.print_myInfo();
    d1.show();
    d2.show();
    cout<<"helo";
    return 0;
}