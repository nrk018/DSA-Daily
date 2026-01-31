//
// Created by Nirmal Rajkumar on 31/01/26.
//
#include <iostream>
using namespace std;

void print1(int n) {
    for (int i = 1; i <= n; i++) {

        // spaces
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2*n - (2*i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print1(n);
}


