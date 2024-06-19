// Scope resolution operator Ambiguity resolution.
#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
        public:

            void input()
            {
                cout<<"Enter value : ";
                cin>>a;
            }  

            void output()
            {
                cout<<endl<<"a = "<<a;
            }
};

class B
{
    protected:
        int b;
        public:

            void input()
            {
                cout<<"Enter value : ";
                cin>>b;
            }
            

            void putdata()
            {
                cout<<endl<<"b = "<<b;
            }
};

class C : public A , public B
{
    protected:          
        int c;
        public:

            void input()
            {
                cout<<"Enter value : ";
                cin>>c;
                A::input();
                B::input();
            }

            void display()
            {
                cout<<endl<<"c = "<<c;
            }


};
int main(){
    C aa;
    aa.input();
    aa.display();
    aa.output();
    aa.putdata();

    return 0;
}