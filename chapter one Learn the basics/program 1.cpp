//
// Created by Nirmal Rajkumar on 13/01/26.
//
#include<stdio.h>
#include<iostream>
using namespace std;
// write a program that takes an input of age
// and prints if you are adult or not

int main() {
    int age;
    cin>>age;
    if (age>= 21) {
        cout<<"you are an adult ";
    }
    else {
        cout<<"hey kid";
    }
    return 0;
}

// else if could be used , else statment is not mandatory.