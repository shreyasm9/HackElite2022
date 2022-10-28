#include <string.h>
#include<iostream>
using namespace std;

void SwapValues(string a, string b)
{
    string temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << "\n";
    cout << "b = " << b;
}
int main()
{
    string a, b;
    cout << "a = ";
    getline(cin, a);
    cout << "b = ";
    getline(cin, b);
    SwapValues(a, b);
}
