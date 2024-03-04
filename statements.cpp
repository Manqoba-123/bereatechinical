/**
 * To study statements if and else statements
 * Even numbers are numbers that are divisible by 2 e.g 2 4 6 8 10 etc...
 * Odd numbers are numbers that are not divisible by 2 e.g 1 3 5 7 9 11 etc..
 * prime numbers are numbers divided by 1 and itself only e.g 2,3,5,7,11,13
 */

#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int b = 11;

    int modulus = a % b;

    cout << "The answer = " << modulus << endl;

    if (a % 2 == 0)
    { // if this statement is true you can enter inside the statement if false go to else
        cout << a << " is even ";
    }
    else
    {
        cout << a << " is a gohst";
    }

    return 0;
}