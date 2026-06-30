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

    // Find first non-repeating character
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
        {
            cout << "First non-repeating character: " << str[i];
            return 0;
        }
    }

    cout << "No non-repeating character found.";

    return 0;
}