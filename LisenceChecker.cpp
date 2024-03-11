#include <iostream>
using namespace std;

/*  main - A program that checks if the user is able to obtain a drivers license.
    return: 0;
   */

  int main()
  {
    int a; // user input
    int b; // user input
    int c; // user input

    cout << "Please enter your age : "<<endl; // asks for the user's age
    cin >> a; // 
    cout << a << endl;

    if (a > 18 || a >= 18){
        cout << "User qualifies to get a drivers license"<< endl; 
    }
    else{
        cout << "User cannot obtain drivers license"<< endl;
    }

    return 0;
  }