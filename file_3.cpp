#include <iostream>
using namespace std;

class Name {
    private: 
    string title;

    public:
    Name (string x) {
        setTitle(x);
    }
    void setTitle(string y) {
        title = y;
    }
    string getTittle() {
        return title;
    }
};

int main() {

    Name test("Welcome to coding 2024");
    cout<<test.getTittle();

    return 0;
}