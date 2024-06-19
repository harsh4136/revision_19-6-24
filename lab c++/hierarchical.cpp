#include<iostream>
using namespace std;

class base
{
    private:
        int a, b;
    public:
        void input(){
            cout<<"Enter value : ";
            cin>>a>>b;
        }

        void show(){
            cout<<"Sum = "<<a+b<<endl;
        }
};

class derive1 : public base
{
    private:
        int n1;
    public:
        void input1(){
            cout<<"Enter value : "<<endl;
            cin>>n1;
        }

        void show1(){
            cout<<"n1 = "<<n1<<endl;
        }
};

class derive2 : public base
{
    private:
        int n2;
    public:
        void input2(){
            cout<<"Enter value : "<<endl;
            cin>>n2;
        }

        void show2(){
            cout<<"n2 = "<<n2<<endl;
        }
};
int main(){
    derive1 ob1;
    derive2 ob2;

    ob1.input1();
    ob1.show1();
   

    ob2.input2();
    ob2.show2();
    ob2.input();
    ob2.show();

    return 0;

}