#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    char maxChar;
    int maxCount = 0;

    // Find maximum occurring character
    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] > maxCount)
        {
            maxCount = count[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount;

    return 0;
}