#include <iostream>
using namespace std;

class Operators {
    private:
    int number1;
    int number2;

    public:
    //The constructor to initiilize the numbers
    Operators(int x, int y) {
        number1 = x;
        number2 = y;
    }
    // metheod to perfom addition of numbers
    int sum() {
        return number1 + number2;
    }
    //method to perform subtraction of numbers
    int difference() {
        return number1 - number2;
    }
    // method to perform division of numbers
    int qoutient() {
        return number1 / number2;
    }
    // Method to perform multiplication of numbers
    int product() {
        return number1 * number2;
    }
};

int main() {
    Operators test(15, 20);
    cout<<"The sum of numbers is: " << test.sum()<<endl;
    cout<<"The difference of numbers is: " << test.difference()<<endl;
    cout<<"The quotient of numbers is: " << test.qoutient()<<endl;
    cout<<"The product of numbers is: " << test.product();
    return 0;
}