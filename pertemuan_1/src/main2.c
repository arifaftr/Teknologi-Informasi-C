#include <stdio.h>

int main()
{
    char umur [10];
    char gabungan[20];

    printf("umur saya: ");
    scanf("%s", umur);

    sprintf(gabungan, "\numur saya adalah %s tahun", umur);
    printf("%s\n",gabungan);

    return 0;
}