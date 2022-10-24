#include <stdio.h>
#include <stdlib.h>
int main ()
{
      char B[100] ;
      printf("Enter the String\n");
      scanf("%s",B);
      printf (“String is \”%s\”\n”, B);
      for (int i = 0; i <= 4; i++)
      {
            int count = 1;
            for (int j = i + 1; B[j] != ‘\0’; j++)
            {
                  if (B[i] == B[j])
                  {
                         count++;
                         B[j] = -1;
                  }
            }
            if (count > 1 && B[i] != -1)
           {
                 printf (“\’%c\’ is appearing: %d times\n”, B[i], count);
           }
      }
      return 0;
}