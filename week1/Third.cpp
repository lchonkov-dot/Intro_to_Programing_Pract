#include <iostream> 

using namespace std;

    int main(){
        char symbol;

        cout << "Write any symbol: ";
        cin >> symbol;

        cout << "The ASCII code of the symbol is: " << (int)symbol;

        return 0;
    }