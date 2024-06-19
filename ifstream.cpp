#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream a("txt1.txt");

    string storage;

    getline(a,storage);
    cout<<storage;
    
    return 0;
}