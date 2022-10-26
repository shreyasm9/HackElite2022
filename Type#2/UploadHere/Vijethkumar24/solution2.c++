#include <iostream>
#include <string.h>
using namespace std;
bool checkforUniqueness(string input)
{
    for (int i = input.length(); i >= 0; i--)
    {
        for (int j = input.length() - 1; j > i; j--)
        {

            if (input[i] == input[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string input;
    cout << "Enter the string:\n";
    getline(cin, input);
    int solution;
    solution = checkforUniqueness(input);
    if (solution == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
