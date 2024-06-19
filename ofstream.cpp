#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream a("txt1.txt");

    if(!a){
        cout<<"error , file operation is not executed";
    }

    a<<"Hello this is the example of ofstream for writing in an file";

    a.close();
    return 0;
}