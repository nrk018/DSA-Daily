//
// Created by Nirmal Rajkumar on 14/01/26.
//

#include <iostream>
using namespace std;
/*
int main() {
    /*
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
    arr[3] += 10;
    cout << arr[3];
    return 0;


    // 2d matrix
    int arr[3][5];
    arr[1][3] = 78;
    cout<<arr[1][3];
    return 0;
}
*/

int main() {
    string s = "Striver";
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len - 1] << endl;
}
