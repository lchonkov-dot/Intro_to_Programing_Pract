#include <iostream>

using namespace std;

int main(){
    double a;
    double b;

    cout << "Enter for a: ";
    cin >> a;
    cout << "Enter for b: ";
    cin >> b;

    double c = a;
    a = b;
    b = c;

    cout << "Switched values: " << a << ", " << b <<endl; // with helping variable

    cout << "Enter for a: ";
    cin >> a;
    cout << "Enter for b: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Switched values: " << a << ", " << b <<endl; // with aritmethic operations
}