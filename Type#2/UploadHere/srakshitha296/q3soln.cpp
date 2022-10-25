#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[100], str2[100], temp[100];
     cout<<"a=";
     cin>>str1;
     cout<<"b=";
     cin>>str2;
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    cout<<"\na="<<str1;
    cout<<"\nb="<<str2;
return 0;
}