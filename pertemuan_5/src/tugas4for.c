#include <stdio.h>

int main(){
    char nama [50], alamat[100];
    int umur, i;

    printf("=== Input Data Diri (Menggunakan For Loop) ===\n");
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);
    printf("Masukkan Alamat: ");
    scanf(" %[^\n]", &alamat);
    printf("Masukkan Umur: ");
    scanf("%d", &umur);
    for ( i = 1; i <= 15; i++)
    {
        printf("\nData Diri ke-%d:\n", i);
        printf("Nama: %s\n", nama);
        printf("Usia: %d Tahun\n", umur);
        printf("Alamat: %s\n", alamat);
    }
    
}
