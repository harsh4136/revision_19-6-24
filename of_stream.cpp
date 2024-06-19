#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream a("txt1.txt", ios::out);   //ios::out is an cordinators used to writing in
    a<<"Hello world";
    a.close();

    fstream b("txt1.txt",ios::in);     //And this is used for reading on output screen
    string storage;
    
    getline(b,storage);
    cout<<storage;

    b.close();

    return 0;
}