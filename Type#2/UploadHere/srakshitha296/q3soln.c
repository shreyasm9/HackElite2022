#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50], temp[50];
    printf("a=");
    scanf("%s",str1);
    printf("b=");
    scanf("%s",str2);
       strcpy(temp,str1);
       strcpy(str1,str2);
       strcpy(str2,temp);
    printf("\na=%s\nb=%s",str1,str2);
    return 0;
}