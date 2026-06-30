#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of names: ";
    cin >> n;

    string name[n];

    cout << "Enter names:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (name[j] > name[j + 1])
            {
                string temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    cout << "Names in Alphabetical Order:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}