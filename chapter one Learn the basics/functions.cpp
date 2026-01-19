//
// Created by Nirmal Rajkumar on 19/01/26.
//

// functions
// types: void , return , parameterised , non parameterised function.

#include<iostream>
#include<math.h>
using namespace std;
/*
// void non parameterised function.
void Printname() {
    cout<<"Hello World"<<endl;
}

int main() {
    Printname();
    return 0;
}
*/

/*
// parameterised void function
void PrintName( string name) {
    cout <<" Hey " << name << endl;
}

int main() {
    string name;
    cin >> name;
    PrintName(name);

    string name2;
    cin  >> name2;
    PrintName(name2);
    return 0;

}
*/
/*
// return function ( take two numbers and print its sum )
int sum(int num1 , int num2) {
    int num3 = num1 + num2;
    return num3;
}

int main() {
    int num1, num2;
    cin>> num1 >> num2;
    int result = sum(num1, num2);
    int result2 = max(num1, num2);
    cout<<"max value of num1 & num2 is: " << result2<<endl;
    cout<<result;
    return 0;
}
*/
/*
// pass by value
// the inital provided value does not change , remains the same
void x(int n) {
    cout << n << endl;
    n +=5;
    cout << n << endl;
    n +=5;
    cout << n << endl;
}

int main() {
    int num = 10;
    x(num);
    cout << num << endl;
    return 0;
}
*/
//pass by reference
// the provided value is changed after an iteration while passing as reference
// add an & beside the variable to pass the address instead of the entire variable itself
void x( string &n ) {
    n[0] = 't';
    cout << n << endl;
}

int main() {
    string s = "naj mahal";
    x(s);
    cout << s << endl;
    return 0;
}

