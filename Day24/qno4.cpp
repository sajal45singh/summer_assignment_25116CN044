#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int count[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    cout << "Duplicate characters are: ";

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] > 1)
        {
            cout << str[i] << " ";
            count[str[i]] = 0;   // Prevent printing the same character again
        }
    }

    return 0;
}