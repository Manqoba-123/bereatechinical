#include <iostream>
using namespace std;

class Name {
    private:
    string title;

    public:
    void setTitle(string x) {
        title = x;
    }
    string getTitle() {
        return title;
    }
};

int main() {
    Name test; //Name is the class name and test is an object name
    test.setTitle("Welcome to coding"); //Here we call the setTitle method by using the test object
    cout<< test.getTitle(); 
    return 0;
}