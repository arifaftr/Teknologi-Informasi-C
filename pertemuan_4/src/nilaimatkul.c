#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int nilai;
    char matkul;

    printf("Program Nilai Mata Kuliah");
    printf("\n-------------------------");
    printf("\t\n------Daftar Matkul-----");
    printf("\nA. Dasar Pemrograman Teori");
    printf("\nB. Dasar Pemrograman Praktikum");
    printf("\nPilih Matkul [A/B] : ");
    scanf("%s", &matkul);

    switch (toupper(matkul))
    {
        case 'A':
        printf("\nMasukan Nilai : ");
        scanf("%i", &nilai);
        switch (nilai/10)
        {
            case 1 :
            case 2 :
                printf("\nNilai Anda E\n"); 
                    break;
            case 3 :
            case 4 :
                printf("\nNilai Anda D\n");
                    break;
            case 5 :
            case 6 :
                printf("\nNilai Anda C\n");
                    break;
            case 7 :
            case 8 :
                printf("\nNilai Anda B\n");
                    break;
            case 9 :
            case 10 :
                printf("\nNilai Anda A\n");
                 break;   
            default: printf("\nsalah input");
            
        }
        break;

        case 'B':
        printf("\nMasukan Nilai : ");
        scanf("%i", &nilai);
        switch (nilai/10)
        {
            case 1 :
            case 2 :
                printf("\nNilai Anda E\n"); 
                    break;
            case 3 :
            case 4 :
                printf("\nNilai Anda D\n");
                    break;
            case 5 :
            case 6 :
                printf("\nNilai Anda C\n");
                    break;
            case 7 :
            case 8 :
                printf("\nNilai Anda B\n");
                    break;
            case 9 :
            case 10 :
                printf("\nNilai Anda A\n");
                    break;   
            default: printf("\nsalah input");  
        }
        break;

        default: printf("\n salah input");
        break;
    }
}