// If the same name of function can do different - different work then it is said to be function overloading .
// Example of an function overloading
#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments, ";
    return a+b;
}

int sum(int a, int b, int c){
     cout<<"Using function with 3 arguments, ";
    return a+b+c;
}

// Calculate the volume of a cylinder.
int volume(double r, int h){
    return (3.14 * r * r * h );
}

// Claculate the volume of a cube. 
int volume(int a){
    return ( a * a * a );
}

//Rectangular box.
int volume(int l, int b, int h){
    return ( l * b * h );
}
int main(){
    int a,b,c;
    int r,h;
    int s;
    int x, y, z;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    cout<<"the sum of a and b is "<<sum(a,b)<<endl;

    cout<<"Enter the value of c "<<endl;
    cin>>c;

    cout<<"the sum of a, b and c is "<<sum(a,b,c)<<endl;

    cout<<"Enter the value of radius and height "<<endl;
    cin>>r>>h;
    cout<<"The volume of cylinder of radius and height is "<<volume(r,h)<<endl; 

    cout<<"Enter the value of side"<<endl;
    cin>>s;
    cout<<"The volume of cube of side is "<<volume(s)<<endl;

    cout<<"Enter the value of length, breadth and height "<<endl;
    cin>>x>>y>>z;
    cout<<"The volume of cuboid of lenght, breadth and height is "<<volume(x,y,z);

    return 0;
}