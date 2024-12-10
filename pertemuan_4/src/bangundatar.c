#include <stdio.h>
#include <math.h>

int main()
{
    int pilih, pilihan;
    double hasil, sisi, panjang, lebar, jarijari;

    printf("Program Menghitung Bangun Datar");
    printf("\n1. Persegi\n");
    printf("2. Persegi Panjang\n");
    printf("3. Lingkaran\n");
    printf("Pilih bangun datar : ");
    scanf("%d", &pilih);

    switch (pilih)
    {
        case 1 :
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\nInput sisi panjang : ");
                scanf("%lf", &sisi);
                hasil = sisi*sisi;
                printf("\nLuas Persegi : %lf", hasil);
            }
            else if (pilihan == 2)
            {
                printf("\nInput sisi panjang : ");
                scanf("%lf", &sisi);
                hasil = 4*sisi;
                printf("\nkeliling Persegi : %lf", hasil);
            }
            else
            {
                printf("\nSalah Input!\n");
            }
        break;
        case 2 :
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\nInput panjang : ");
                scanf("%lf", &panjang);
                printf("\nInput lebar : ");
                scanf("%lf", &lebar);
                hasil = panjang*lebar;
                printf("\nLuas Persegi Panjang : %lf", hasil);
            }
            else if (pilihan ==2)
            {
                printf("\nInput panjang : ");
                scanf("%lf", &panjang);
                printf("\nInput lebar : ");
                scanf("%lf", &lebar);
                hasil = 2 * (panjang+lebar);
                printf("\nKeliling Persegi Panjang :%lf", hasil);
            }
            else
            {
                printf("\nSalah Input : ");
            }
        break;
        case 3 :
            printf("\nMenghitung Luas dan Keliling\n");
            printf("1. Luas\n");
            printf("2. Keliling\n");
            printf("Input Pilihan : ");
            scanf("%i", &pilihan);
            if (pilihan == 1)
            {
                printf("\nInput jari-jari lingkaran : ");
                scanf("%lf", &jarijari);
                hasil= 3.14 * pow(jarijari, 2);
                printf("\nLuas Lingkaran : %lf\n", hasil);
            }
            else if (pilihan == 2)
            {
                printf("\nInput jari-jari lingkaran : ");
                scanf("%lf", &jarijari);
                hasil= 2 * 3.14 * jarijari;
                printf("\nKeliling Lingkaran : %lf\n", hasil);
            }
            else
            {
                printf("\nSaalah Input!");
            }
        break; 
        default:
            printf("Pilihan salah!\n");
        break;
    }
}