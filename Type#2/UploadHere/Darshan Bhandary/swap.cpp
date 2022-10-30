/*   type#2 - question 3
    Given 2 values of same type swap both the values*/

// solution
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[100], s2[100], t[100];
     cout<<"a=";
     cin>>s1;
     cout<<"b=";
     cin>>s2;
        strcpy(t,s1);
        strcpy(s1,s2);
        strcpy(s2,t);
    cout<<"\na="<<s1;
    cout<<"\nb="<<s2;
return 0;
}