// Develop Program using Manipulators (endl, setw, setprecision, setfill)
#include <iostream>
#include <iomanip> // Include the iomanip header for manipulators
using namespace std;
int main() {
    int num1 = 123;
    double num2 = 4567.890123;

    // Using setw to set the width of the output
    cout << "Using setw to set the width:" << endl;
    cout << setw(10) << num1 << endl; // Output with width of 10

    // Using setprecision to control the number of decimal places
    cout << "\nUsing setprecision to control decimal places:" << endl;
    cout << setprecision(4) << num2 <<endl; // Output with 4 decimal places

    // Using setfill to set the fill character for setw
    cout << "\nUsing setfill to set the fill character:" << endl;
    cout << setfill('*')<<setw(12)<< num1 << endl; // Output with fill character '*'


    // Using endl to insert a newline and flush the output buffer
    cout << "\nUsing endl to insert a newline:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}
