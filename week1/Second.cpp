#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "Enter value: ";
    cin >> a;

    if(a%2 == 0){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;
}