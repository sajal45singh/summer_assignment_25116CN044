#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int i = 0;
    int j = str.length() - 1;
    bool palindrome = true;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            palindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (palindrome)
        cout << "The string is a Palindrome.";
    else
        cout << "The string is NOT a Palindrome.";

    return 0;
}