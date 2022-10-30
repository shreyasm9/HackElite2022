/*Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?*/

// solution

#include<iostream>
#include<string.h>
using namespace std;
int main() {
  char s[100];
  int n, i, j;
  cout<<"Enter a string : ";
  cin>>s;
  n=strlen(s);               // finding the string length
     for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(s[i]==s[j]&&s[i]!='"') {
            cout<<"false";
            exit(0);
            }
            }
        }
  cout<<"true";
  return 0;
}