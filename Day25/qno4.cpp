#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    string word[n];

    cout << "Enter the words:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }

    // Bubble Sort based on word length
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (word[j].length() > word[j + 1].length())
            {
                string temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    cout << "Words sorted by length:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << word[i] << endl;
    }

    return 0;
}