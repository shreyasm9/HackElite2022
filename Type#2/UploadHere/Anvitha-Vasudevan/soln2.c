#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char a[100], b[100], ch[100];
    printf("\nEnter a = ");
    scanf("%s", a);
    printf("Enter b = ");
    scanf("%s", b);
    strcpy(ch, a);
    strcpy(a, b);
    strcpy(b, ch);
    printf("\nAfter swapping\na = %s\nb = %s\n", a, b);
    return 0;
}