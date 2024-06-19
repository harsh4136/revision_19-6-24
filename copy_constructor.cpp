#include<iostream>
using namespace std;

class demo
{
    int a;
    public:
        demo(){
            a = 10;
        }
        // demo (demo &z){
        //     a = z.a;
        // }

        void putdata(){
            cout<<" A = "<<a;
        }
};
int main(){
    demo a;
    demo b(a);
    demo c = b;

    a.putdata();
    b.putdata();
    c.putdata();
    return 0;
}