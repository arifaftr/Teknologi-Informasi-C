#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tambahData() {
    FILE *file;
    char nama[50], keluhan[100], dokter[50], tanggal[20];
    int umur, bb, tb;
    
   
    file = fopen("rekam_medis.csv", "a+");
    if (file == NULL) {
        printf("Gagal membuka file rekam_medis.csv!\n");
        return;
    }
    
    printf("\n=== Tambah Data Rekam Medis ===\n");
    printf("Nama Pasien      : ");
    scanf(" %[^\n]", nama); 
    printf("Umur Pasien      : ");
    scanf("%d", &umur);
    printf("Berat Badan      : ");
    scanf("%d", &bb);
    printf("Tinggi Badan     : ");
    scanf("%d", &tb);
    printf("Keluhan          : ");
    scanf(" %[^\n]", keluhan);
    printf("Dokter Penanggung: ");
    scanf(" %[^\n]", dokter);
    printf("Tanggal (DD/MM/YYYY): ");
    scanf(" %[^\n]", tanggal);
    
    
    fprintf(file, "%s,%d,%d,%d,%s,%s,%s\n", nama, umur, bb, tb, keluhan, dokter, tanggal);
    printf("Data berhasil ditambahkan!\n");
    
    fclose(file); 
}


void lihatData() {
    FILE *file;
    char buffer[256];
    
    
    file = fopen("rekam_medis.csv", "r+");
    if (file == NULL) {
        printf("File rekam_medis.csv tidak ditemukan!\n");
        return;
    }
    
    printf("\n=== Data Rekam Medis ===\n");
    printf("Nama,Umur,berat badan,tinggi badan,Keluhan,Dokter,Tanggal\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer); // Cetak isi file baris per baris
    }
    
    fclose(file); 
}


int main() {
    int pilihan;
    

    printf("=====================================\n");
    printf(" Rekam Medis Klinik Dokter Aisyiyyah \n");
    printf("=====================================\n");
    
    do {
        
        printf("\nMenu:\n");
        printf("1. Tambah Data\n");
        printf("2. Lihat Semua Data Rekam Medis\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                lihatData();
                break;
            case 3:
                printf("Terima kasih telah menggunakan aplikasi ini!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 3);
    
    return 0;
}
