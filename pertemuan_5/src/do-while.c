#include <stdio.h>

int main()
{
    int i=1;
    int n;
    printf("Inputkan bilangan : ");
    scanf("%d", &n);

    do
    {
        printf("ulang ke-%d\n", i);
        i++;
    } while (i<=n);
    
    getchar();
    
}