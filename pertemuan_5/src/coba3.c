#include <stdio.h>

int main()
{
    int i,j;
    for ( i = 9; i >= 1; i-=2)
    {
       j = 1;
       while (j <= i)
       {
        printf("%d", j);
        j++;
       }
       printf("\n");
       
    }
    return 0;
    
}