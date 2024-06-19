//  Develop Program using Enumeration.
#include<iostream>
using namespace std;

enum week{
    monday, tuesday, wednesday, thursday, friday, saturday, sunday 
};
int main(){
    week day;
    day = sunday;
    cout<<"Day : "<<day;
    return 0;
}