#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Row-wise sums are:\n";
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}