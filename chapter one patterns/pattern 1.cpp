//
// Created by Nirmal Rajkumar on 20/01/26.
//

/* pattern 1
 *****
 *****
 *****
 *****
 *****
 */

#include <iostream>;
using namespace std;

int main() {
    for ( int i = 1; i<=4 ; i++) //ROW  {
        for (int j = 1; j<=4; j++) // COLUMN{
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}

