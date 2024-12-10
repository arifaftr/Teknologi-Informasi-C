#include <stdio.h>
int main(){
    int umur, i = 1;
    char nama [50], alamat[100];
    
    printf("=== Input Data Diri (Menggunakan While Loop) ===\n");
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);
    printf("Masukkan Alamat: ");
    scanf(" %[^\n]", alamat);
    printf("Masukkan Umur: ");
    scanf("%d", &umur);
    
    do
    {
        printf("\nData Diri ke-%d:\n", i);
        printf("Nama: %s\n", nama);
        printf("Usia: %d Tahun\n", umur);
        printf("Alamat: %s\n", alamat);
        i++;
    } while (i <= 15);
    
    
    return 0;
}
