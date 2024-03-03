#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 12;
    int c = 15;
    int d = 20;

    int sum = a + b; //The value of sum is 22
    int diff = a - b;
    int prod = a * b;
    int modulus = b % a; //2
    int modulus1 = c % d; //15

    //cout << "The sum of a and b = " << sum <<endl; //It concanate the arguments in your cout function.
    //cout << "The difference of a and b = " << diff <<endl; //It concanate the arguments in your cout function.
   //cout << "The poduct of a and b = " << prod; //It concanate the arguments in your cout function. alt + shift + arrow down
    //cout << "The poduct of a and b = " << prod; //It concanate the arguments in your cout function.
    cout << "The modulus of a and b = " << modulus <<endl; //It concanate the arguments in your cout function.
    cout << "The modulus1 of c and d = " << modulus1; //It concanate the arguments in your cout function.
    
    return 0;
}