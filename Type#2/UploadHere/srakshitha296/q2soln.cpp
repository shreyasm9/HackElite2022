/*Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str[100];
  int n, i, j;
  cout<<"Enter a string : ";
  cin>>str;
  n=strlen(str);
     for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(str[i]==str[j]&&str[i]!='"')
            {
            cout<<"false";
            exit(0);
            }
            }
        }
  cout<<"true";
  return 0;
}
