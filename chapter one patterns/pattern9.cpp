//
// Created by Nirmal Rajkumar on 31/01/26.
//

#include <iostream>
using namespace std;

void printDiamond(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {

        int spaces, stars;

        if (i <= n) {
            spaces = n - i;
            stars = 2 * i - 1;
        }
        else {
            spaces = i - n;
            stars = 2 * (2 * n - i) - 1;
        }

        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    printDiamond(n);

    return 0;
}