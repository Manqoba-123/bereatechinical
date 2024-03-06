#include <iostream>
using namespace std;

int main() {
    //Let us ask a user to input the number
    int a, b;
    //We use cin >> to tell the compiler to ask for user input
    cout <<"Please enter the value of a: ";
    cin >> a;
    cout <<"Please enter the value of b: ";
    cin >> b;
    //cout <<"The value of a= " << a << "\n";
    //cout <<"The value of b= " << b;

    if (a >= b) {
        cout<< a <<" is greater than  " << b <<endl;
    }
    else {
        cout<< b <<" is greater than " << a;
    }
}