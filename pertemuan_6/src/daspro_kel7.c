#include <stdio.h>

int main(){
    int sisi_1, sisi_2, sisi_3;
    
    printf("----------------------------------\n");
    printf(" Program pengenalan tipe segitiga \n");
    printf("----------------------------------\n");

    while (1)
    {
        printf("\nmasukan panjang sisi 1: ");
        scanf("%d", &sisi_1);
        if (sisi_1 < 0) {
            printf("Input tidak valid\nProgram selesai\n");
            break;
        }
        
        printf("masukan panjang sisi 2: ");
        scanf("%d", &sisi_2);
        if (sisi_2 < 0) {
            printf("Input tidak valid\nProgram selesai\n");
            break;
        }
        
        printf("masukan panjang sisi 3: ");
        scanf("%d", &sisi_3);
        if (sisi_3 < 0) {
            printf("Input tidak valid\nProgram selesai\n");
            break;
        }

        if (sisi_1 == 0 || sisi_2 == 0 || sisi_3 == 0)
        {
            printf("bukan jenis segitiga\n");

            if (sisi_1 == 0 && sisi_2 == 0 && sisi_3 == 0)
            {
                printf("ini adalah titik\n");
            }
            else if ((sisi_1 == 0 && sisi_2 == 0)|| (sisi_1 == 0 && sisi_3 == 0) || (sisi_2 == 0 && sisi_3 == 0) )
            {
                printf("ini adalah garis \n");
            }
            else
            {
                printf("ini adalah 2 buah garis \n");
            }
            
            continue;
        
        }

        if (sisi_1 == sisi_2 && sisi_1== sisi_3)
        {
            printf("ini adalah segitiga sama sisi\n");
        }
        else if (sisi_1 == sisi_2 || sisi_1 == sisi_3 || sisi_2 == sisi_3)
        {
            printf("ini adalah segitiga sama kaki\n");
        }
        else
        {
            printf("ini adalah segitiga sembarang\n");
        }

        
    }
     
    return 0;

}
