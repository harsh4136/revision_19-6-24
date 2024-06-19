#include<iostream>
using namespace std;

class mann{
    public:
        void print_myInfo() {
            cout<<"Helo my name is mann bhalodiya i am studing in diploma";
        }
};
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
    
class harsh : public demo
{
    string name;
    public:
        void print_name(){
            cout<<"Enter your name : ";
            cin>>name;
            cout<<"User's name is : "<<name<<endl;
        }
};

int main(){
    mann m;
    harsh data;
    demo d1;
    demo d2(3);
    demo d3(4,4.5);
    m.print_myInfo();
    d1.show();
    d2.show();
    data.print_name();
    cout<<"Program ended successfully";
    return 0;
}