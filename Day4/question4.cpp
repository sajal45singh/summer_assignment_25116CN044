#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    cout << "Armstrong numbers are: ";

    for (int num = start; num <= end; num++) {
        int temp = num, sum = 0, rem;

        while (temp != 0) {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}