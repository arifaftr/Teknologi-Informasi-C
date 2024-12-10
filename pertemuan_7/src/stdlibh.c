#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

    printf("Masukan angka pertama : ");
    scanf("%d", &a);
    printf("Masukan angka kedua : ");
    scanf("%d", &b);

    div_t hasil = div(a,b);

    printf("Hasil bagi : %d\n", hasil.quot);
    printf("Sisa : %d\n", hasil.rem);
    return 0;
}