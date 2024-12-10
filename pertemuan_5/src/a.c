#include <stdio.h>

int main()
{
    int i,j;
    int n = 6;
    for ( i = 6; i >=1; i--)
    {
        j=1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        
    }
    return 0;
    
    
}