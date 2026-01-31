//
// Created by Nirmal Rajkumar on 20/01/26.
//

/* pattern 7
     *
    ***
   *****
  *******
 *********
 */
#include <iostream>
using namespace std;

void print1(int n) {
 for (int i = 1; i <= n; i++) {

  // spaces
  for (int j = 0; j < n - i; j++) {
   cout << " ";
  }

  // stars
  for (int j = 0; j < 2 * i - 1; j++) {
   cout << "*";
  }

  cout << endl;
 }
}

int main() {
 int n;
 cin >> n;
 print1(n);
}