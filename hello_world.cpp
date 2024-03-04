/**
 * Welcome to our coding session
*/

// single line comment

// header file <iostream>
#include <iostream>
using namespace std;

//This where the magic happens the main function which returns 0; for telling the compiler to terminate.
int main() {

    //operations +,-,/,*,%(modulus)  ||(or) (&&)and <(less than) >(greater than) <=(less or equal to) >=(greater or equal) ==(equal to)
    int a = 10; //we declared variable a and then we assigned it's value to be 12
    int b = 10; // datatype variable = value;
    //if we have one equal sign(=) it means assignment of a variable to a value and double equal sign(==) means equal to mostly used for comparison
    int sum = a + b; //declare variable sum and assigned with value a + b
    int diff = a - b;
    double div = a / b;
    int mul = a * b;
    int mod = a % b; //modulus 12 % 7

    cout<< "The sum of a and b = " << sum <<endl;
    cout<< "The diff of a and b = " << diff <<endl;
    cout<< "The div of a and b = " << div <<endl;
    cout<< "The mul of a and b = " << mul <<endl;
    cout<< "The mod of a and b = " << mod <<endl;
    return 0;
}