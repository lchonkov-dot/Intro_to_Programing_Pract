#include <iostream>

using namespace std;

int main(){
    unsigned int a;

    cout << "Enter a positive 4-digit number: ";
    cin >> a;
    cout << a%10 << "-" << (a/10)%10 << "-" << (a/100)%10 << "-" << a/1000;
}