#include <iostream>
using namespace std;

class StringsPrac {
    public:  // we use the public access modifierto access the varaible both within and outside the class
    void string1() {
        cout<< "Hello" <<endl;
    }
    void string2() {
        cout<< "Aziwe" <<endl;
    }
};

int main() {
    StringsPrac test; //Numbers is a class name and test is an object name
    test.string1(); //Calling by using the test object
    test.string2();

    return 0;
}