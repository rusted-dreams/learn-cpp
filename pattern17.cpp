#include <iostream>
using namespace std;

/*print the following pattern:
        * * * *
        * * *
        * *
        * 
*/

int main() {
    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    int i = 1;

    while (i<=n) {
        int j = 1;
        while (j<=n-i+1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}