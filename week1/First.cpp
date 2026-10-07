#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    
    cout << "Sum: " << a+b << endl;
    cout << "Razlika: " << a-b << endl;
    cout << "Proizvedenie: " << a*b << endl;
    cout << "Chastno: " << a/b << endl;
    cout << "Ostatyk: " << a%b << endl;
    
    return 0;
}