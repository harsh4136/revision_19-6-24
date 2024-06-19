#include<iostream>
using namespace std;

class demo{
    int id;
    int count;
    public:
        void getdata(){
            cout<<"Enter the id of the employee"<<endl;
            cin>>id;
        }
        void setdata(){
            cout<<"The id of the employee is "<<id<<endl;
        }
};
int main(){

    demo d[5];

    for (int i = 0; i <5 ; i++){
        d[i].getdata();
        d[i].setdata();
    }
    return 0;
}