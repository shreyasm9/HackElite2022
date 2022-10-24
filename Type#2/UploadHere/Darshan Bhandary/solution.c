/*type#2 - question 3*/
/* Given 2 values of same type swap both the values*/

//solution
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){  
    char a[100], b[100], ch[100];       //input of any data type is taken as a string
        printf("\nEnter a = ");
        scanf("%s",a);
        printf("Enter b = ");
        scanf("%s",b);
        strcpy(ch,a);                 //string built-in function to copy a string from source to destination
        strcpy(a,b);
        strcpy(b,ch);
        printf("\nAfter swapping\na = %s\nb = %s\n",a,b);
    return 0; 
}