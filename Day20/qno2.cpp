#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;

    int a[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int flag = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        cout << "Matrix is Symmetric.";
    else
        cout << "Matrix is Not Symmetric.";

    return 0;
}