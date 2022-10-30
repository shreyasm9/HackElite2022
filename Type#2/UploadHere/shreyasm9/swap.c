#include<stdio.h> 
int main()
{
int a,b, temp; 
printf("Enter two integersn");
scanf("%d%d", &a, &b);
printf("Before SwappingnFirst variable = %dnSecond variable = %dn", a, b);
temp = a;
a = b;
b = temp;
printf("After SwappingnFirst variable = %dnSecond variable = %dn", a, b);
return 0;
}