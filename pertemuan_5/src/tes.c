#include <stdio.h>

int main()
{
    int i=9;
    int j,k;
    do
    {
        k=1;
        do
        {
            printf(" ");
            k++;

        } while (k<(9-i)/2);
        j=1;
        do
        {
            printf("%d",j);
            j++;
        } while (j<=i);
        printf("\n");
    i-=2;
    } while (i>=1);
    
}