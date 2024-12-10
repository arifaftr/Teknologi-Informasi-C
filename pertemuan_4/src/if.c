#include <stdio.h>
#include <string.h>

int main()
{
    int nilai;
    printf("Inputkan nilai ujian kamu: ");
    scanf("%d", &nilai);

    if (nilai>= 75)
    {
        printf("\nSelamat, kamu lulus ujian\n");
        printf("Pertahankan!!");
    }
    
}