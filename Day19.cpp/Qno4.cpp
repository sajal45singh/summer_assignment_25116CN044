#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, sum = 0;

    cout << "Enter order of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Find sum of principal diagonal elements
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    cout << "Sum of diagonal elements = " << sum;

    return 0;
}