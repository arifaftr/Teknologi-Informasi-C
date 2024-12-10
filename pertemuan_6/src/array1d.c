#include <stdio.h>

void tampilkan_grafik_nilai(int nilai[])
{
    printf("\nGrafik nilai\n");
    for (int i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            printf("0-9  : ");
        }
        else if (i == 10)
        {
            printf("100 : ");
        }
        else
        {
            printf("%d-%d: ", i*10, (i*10)+9);
        }

        for (int bintang = 0; bintang < nilai[i]; bintang++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}  

int main()
{
    int nilai[11];

    printf("Program menampilkan grafik nilai\n");
    for (int i = 0; i < 10; i++)
    {
        printf("jumlah mahasiswa dengan nilai");
        if(i == 0)
        {
            printf("0-9  : ");
        }
        else if (i == 10)
        {
            printf("100 : ");
        }
        else
        {
            printf("%d-%d: ", i*10, (i*10)+9);
        }
        scanf("%d", &nilai[i]);
    }
    printf("\n");
    tampilkan_grafik_nilai(nilai);
    return 0;
    
}

