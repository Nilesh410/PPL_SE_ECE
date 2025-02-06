#include <iostream>
using namespace std;

// Template function to find the maximum of three values
template <class T>
T maximum(T a, T b, T c) {
    T max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    // Example with integers
    cout << "Maximum (int): " << maximum(2, 3, 4) << endl;

    // Example with floating-point numbers
    cout << "Maximum (float): " << maximum(12.5, 23.2, 45.4) << endl;

    return 0; 
}

