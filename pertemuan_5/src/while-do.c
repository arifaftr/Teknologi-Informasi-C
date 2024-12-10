#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    
    printf("masukan banyak pengulangan : ");
    scanf("%i", &n);

    while (i <= n)
    {
       printf("ulang ke-%d\n", i);

       i++;
    }
    
    return 0;
}