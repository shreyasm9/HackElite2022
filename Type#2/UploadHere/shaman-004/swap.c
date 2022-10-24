#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,temp;
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping:\n ")
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}