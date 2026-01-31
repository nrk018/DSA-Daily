//
// Created by Nirmal Rajkumar on 20/01/26.
//

/* pattern 6
 12345
 1234
 123
 12
 1
 */


// for the outer loop , write the number of lines
// for the inner loop , focus on the columns & connect them somehow with rows
// print them x inside the inner for loop
// observe symmetry ( optional )
#include<iostream>
using namespace std;

void print (int n) {
 for (int i = 1; i<=n; i++) {
  for (int j = 1; j<=n-i+1; j++) {
   cout<<j;
  }
  cout<<endl;
 }
}
int main() {
 int n;
 cin>>n;
 print(n);
}