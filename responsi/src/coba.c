#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PASIEN 100
#define MAX_NAMA 50
#define MAX_OBAT 50

typedef struct {
    char nama[MAX_NAMA];
    int umur;
    char jenis_kelamin;
    char dokter[MAX_NAMA];
    char riwayat_perawatan[MAX_NAMA];
    char penyakit[MAX_NAMA];
    char obat[MAX_OBAT];
    float biaya;
    char metode_pembayaran[10];
} Pasien;

Pasien pasienList[MAX_PASIEN];
int jumlahPasien = 0;

void tambahPasien();
void hapusPasien();
void updatePasien();
void pemberianObat();
void pembayaran();
void simpanData();
void tampilkanData();
void clearBuffer();

int main() {
    int pilihan;

    do {
        printf("\n=== Sistem Aplikasi Dental Care Unisa ===\n");
        printf("1. Tambah Data Pasien\n");
        printf("2. Hapus Data Pasien\n");
        printf("3. Update Data Pasien\n");
        printf("4. Pemberian Obat\n");
        printf("5. Pembayaran\n");
        printf("6. Tampilkan Data Pasien\n");
        printf("7. Simpan Data ke File\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        clearBuffer();

        switch (pilihan) {
            case 1: tambahPasien(); break;
            case 2: hapusPasien(); break;
            case 3: updatePasien(); break;
            case 4: pemberianObat(); break;
            case 5: pembayaran(); break;
            case 6: tampilkanData(); break;
            case 7: simpanData(); break;
            case 0: printf("Keluar dari program.\n"); break;
            default: printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

    return 0;
}

void clearBuffer() {
    while (getchar() != '\n');
}

void tambahPasien() {
    if (jumlahPasien >= MAX_PASIEN) {
        printf("Data pasien sudah penuh.\n");
        return;
    }

    printf("Masukkan nama pasien: ");
    fgets(pasienList[jumlahPasien].nama, MAX_NAMA, stdin);
    pasienList[jumlahPasien].nama[strcspn(pasienList[jumlahPasien].nama, "\n")] = 0; // Menghapus newline

    printf("Masukkan umur pasien: ");
    scanf("%d", &pasienList[jumlahPasien].umur);
    clearBuffer();

    printf("Masukkan jenis kelamin pasien (L/P): ");
    scanf("%c", &pasienList[jumlahPasien].jenis_kelamin);
    clearBuffer();

    printf("Masukkan nama dokter: ");
    fgets(pasienList[jumlahPasien].dokter, MAX_NAMA, stdin);
    pasienList[jumlahPasien].dokter[strcspn(pasienList[jumlahPasien].dokter, "\n")] = 0;

    printf("Masukkan riwayat perawatan: ");
    fgets(pasienList[jumlahPasien].riwayat_perawatan, MAX_NAMA, stdin);
    pasienList[jumlahPasien].riwayat_perawatan[strcspn(pasienList[jumlahPasien].riwayat_perawatan, "\n")] = 0;

    printf("Masukkan penyakit (jika ada): ");
    fgets(pasienList[jumlahPasien].penyakit, MAX_NAMA, stdin);
    pasienList[jumlahPasien].penyakit[strcspn(pasienList[jumlahPasien].penyakit, "\n")] = 0;

    jumlahPasien++;
    printf("Data pasien berhasil ditambahkan.\n");
}

void hapusPasien() {
    char nama[MAX_NAMA];
    printf("Masukkan nama pasien yang ingin dihapus: ");
    fgets(nama, MAX_NAMA, stdin);
    nama[strcspn(nama, "\n")] = 0;

    for (int i = 0; i < jumlahPasien; i++) {
        if (strcmp(pasienList[i].nama, nama) == 0) {
            for (int j = i; j < jumlahPasien - 1; j++) {
                pasienList[j] = pasienList[j + 1];
            }
            jumlahPasien--;
            printf("Data pasien berhasil dihapus.\n");
            return;
        }
    }

    printf("Data pasien tidak ditemukan.\n");

    void updatePasien() {
    char nama[MAX_NAMA];
    printf("Masukkan nama pasien yang ingin diupdate: ");
    fgets(nama, MAX_NAMA, stdin);
    nama[strcspn(nama, "\n")] = 0;

    for (int i = 0; i < jumlahPasien; i++) {
        if (strcmp(pasienList[i].nama, nama) == 0) {
            printf("Masukkan umur baru pasien: ");
            scanf("%d", &pasienList[i].umur);
            clearBuffer();

            printf("Masukkan jenis kelamin baru pasien (L/P): ");
            scanf("%c", &pasienList[i].jenis_kelamin);
            clearBuffer();

            printf("Masukkan nama dokter baru: ");
            fgets(pasienList[i].dokter, MAX_NAMA, stdin);
            pasienList[i].dokter[strcspn(pasienList[i].dokter, "\n")] = 0;

            printf("Masukkan riwayat perawatan baru: ");
            fgets(pasienList[i].riwayat_perawatan, MAX_NAMA, stdin);
            pasienList[i].riwayat_perawatan[strcspn(pasienList[i].riwayat_perawatan, "\n")] = 0;

            printf("Masukkan penyakit baru (jika ada): ");
            fgets(pasienList[i].penyakit, MAX_NAMA, stdin);
            pasienList[i].penyakit[strcspn(pasienList[i].penyakit, "\n")] = 0;

            printf("Data pasien berhasil diupdate.\n");
            return;
        }
    }
    printf("Pasien dengan nama %s tidak ditemukan.\n", nama);
}

void pemberianObat() {
    char nama[MAX_NAMA];
    printf("Masukkan nama pasien untuk pemberian obat: ");
    fgets(nama, MAX_NAMA, stdin);
    nama[strcspn(nama, "\n")] = 0;

    for (int i = 0; i < jumlahPasien; i++) {
        if (strcmp(pasienList[i].nama, nama) == 0) {
            printf("Masukkan nama obat yang diberikan: ");
            fgets(pasienList[i].obat, MAX_OBAT, stdin);
            pasienList[i].obat[strcspn(pasienList[i].obat, "\n")] = 0;
            printf("Obat berhasil diberikan kepada pasien %s.\n", pasienList[i].nama);
            return;
        }
    }
    printf("Pasien dengan nama %s tidak ditemukan.\n", nama);
}

void pembayaran() {
    char nama[MAX_NAMA];
    printf("Masukkan nama pasien untuk pembayaran: ");
    fgets(nama, MAX_NAMA, stdin);
    nama[strcspn(nama, "\n")] = 0;

    for (int i = 0; i < jumlahPasien; i++) {
        if (strcmp(pasienList[i].nama, nama) == 0) {
            printf("Masukkan biaya perawatan: ");
            scanf("%f", &pasienList[i].biaya);
            clearBuffer();

            printf("Pilih metode pembayaran (QRIS/Bank/Cash): ");
            fgets(pasienList[i].metode_pembayaran, 10, stdin);
            pasienList[i].metode_pembayaran[strcspn(pasienList[i].metode_pembayaran, "\n")] = 0;

            printf("Pembayaran berhasil untuk pasien %s.\n", pasienList[i].nama);
            return;
        }
    }
    printf("Pasien dengan nama %s tidak ditemukan.\n", nama);
}

void simpanData() {
    FILE *file = fopen("Rekam_Medis_Pasien.csv", "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk menyimpan data.\n");
        return;
    }

    fprintf(file, "Nama,Umur,Jenis Kelamin,Dokter,Riwayat Perawatan,Penyakit,Obat,Biaya,Metode Pembayaran\n");
    for (int i = 0; i < jumlahPasien; i++) {
        fprintf(file, "%s,%d,%c,%s,%s,%s,%s,%.2f,%s\n", pasienList[i].nama, pasienList[i].umur, pasienList[i].jenis_kelamin, pasienList[i].dokter, pasienList[i].riwayat_perawatan, pasien.penyakit, pasienList[i].obat, pasienList[i].biaya, pasienList[i].metode_pembayaran);
    }

    fclose(file);
    printf("Data pasien berhasil disimpan ke file Rekam_Medis_Pasien.csv.\n");
}

void tampilkanData() {
    if (jumlahPasien == 0) {
        printf("Tidak ada data pasien untuk ditampilkan.\n");
        return;
    }

    printf("\n=== Data Pasien ===\n");
    printf("Nama\t\tUmur\tJenis Kelamin\tDokter\t\tRiwayat Perawatan\tPenyakit\tObat\t\tBiaya\tMetode Pembayaran\n");
    for (int i = 0; i < jumlahPasien; i++) {
        printf("%s\t%d\t%c\t\t%s\t%s\t\t%s\t%s\t%.2f\t%s\n",
               pasienList[i].nama,
               pasienList[i].umur,
               pasienList[i].jenis_kelamin,
               pasienList[i].dokter,
               pasienList[i].riwayat_perawatan,
               pasienList[i].penyakit,
               pasienList[i].obat,
               pasienList[i].biaya,
               pasienList[i].metode_pembayaran);
    }
}

}