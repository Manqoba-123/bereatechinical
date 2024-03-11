/**
 * Write a program to verify if the given age is Kid, Minor, Adult. and they do qualify for licence
 * Expected output-: 17 Years is a minor and they  qualify for the licence only if parents approved
 *                   -1 Invalid age please type correct age format
 * Hint-: age <= 16 do not qualify for licence
 *        age >= 18 can take licence without parents concern 
 * File name -: licence_checker.cpp
*/

#include <iostream>
using namespace std;

int main() {
    //declaration of variables 4 marks
    //datatype variable = value;
    int age;

    cout<<"Enter your age:" << endl;
    
    //cout<<"Your age is " << age;

    //get age as user input 5 marks
    cin>> age;

    //statements 15 marks
    if (age > 0 && age <= 16  ) {
        cout<< age <<" Years is a kid and do not qualify for license."<<endl;
    }
    else if (age > 16 && age <= 17) {
        cout<< age <<" Years is a Minor and do qualify for license only if parents approved."<<endl;
    }
    else if (age >= 18 && age <= 125) {
        cout<< age <<" Years is a Inqwele and do qualify for license."<<endl;
    }
    else {
        cout<< age <<" Invalid age please type correct age format"<<endl;
    }


    //return statement 1 mark
    return 0;
}