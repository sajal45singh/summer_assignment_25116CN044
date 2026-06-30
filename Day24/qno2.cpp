#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = "";
    int count = 1;

    for (int i = 0; i < str.length(); i++)
    {
        if (i < str.length() - 1 && str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            result = result + str[i] + to_string(count);
            count = 1;
        }
    }

    cout << "Compressed string: " << result;

    return 0;
}