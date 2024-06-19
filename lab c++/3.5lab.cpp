// Develop Program using Constant Arguments.
#include <iostream>
using namespace std;
// Function to calculate the square of a constant integer argument
int square(const int x ) {
    // Attempting to modify x will result in a compilation error
    // x = x * x; // This line would cause a compilation error
    return x * x;
}

int main() {
    int num = 6;

    cout << "Original number: " << num << endl;
    cout << "Square of the number: " << square(num) << endl;

    return 0;
}
