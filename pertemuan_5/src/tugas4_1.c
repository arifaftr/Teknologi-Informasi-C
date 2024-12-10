#include <stdio.h>

int main() {
    char nama[50], alamat[100];
    int umur;
    
    // Menggunakan perulangan for
    printf("=== Input Data Diri (Menggunakan For Loop) ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("\nData Diri ke-%d:\n", i);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", nama); // Mengambil input nama (dengan spasi)
        printf("Masukkan Umur: ");
        scanf("%d", &umur);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", alamat); // Mengambil input alamat (dengan spasi)
        printf("Data Diri %d: Nama = %s, Umur = %d, Alamat = %s\n", i, nama, umur, alamat);
    }
    
    // Menggunakan perulangan while
    printf("\n=== Input Data Diri (Menggunakan While Loop) ===\n");
    int j = 1;
    while (j <= 5) {
        printf("\nData Diri ke-%d:\n", j);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", nama);
        printf("Masukkan Umur: ");
        scanf("%d", &umur);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", alamat);
        printf("Data Diri %d: Nama = %s, Umur = %d, Alamat = %s\n", j, nama, umur, alamat);
        j++;
    }
    
    // Menggunakan perulangan do-while
    printf("\n=== Input Data Diri (Menggunakan Do-While Loop) ===\n");
    int k = 1;
    do {
        printf("\nData Diri ke-%d:\n", k);
        printf("Masukkan Nama: ");
        scanf(" %[^\n]", nama);
        printf("Masukkan Umur: ");
        scanf("%d", &umur);
        printf("Masukkan Alamat: ");
        scanf(" %[^\n]", alamat);
        printf("Data Diri %d: Nama = %s, Umur = %d, Alamat = %s\n", k, nama, umur, alamat);
        k++;
    } while (k <= 5);

    printf("\n=== Selesai Input Data Diri ===\n");
    
    return 0;
}
