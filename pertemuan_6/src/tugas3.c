#include <stdio.h>
#include <string.h>


#define MAX_PATIENTS 100
#define MAX_NAME_LEN 50

// Fungsi deklarasi
void enqueue(char antrian[][MAX_NAME_LEN], int *akhir, char *nama);
void dequeue(char antrian[][MAX_NAME_LEN], int *awal, int *akhir);
void daftar_antrian(char antrian[][MAX_NAME_LEN], int awal, int akhir);

int main() {
    char antrian[MAX_PATIENTS][MAX_NAME_LEN];   
    int awal = 0, akhir = 0;      
    int pilihan;
    char nama[MAX_NAME_LEN];

    printf("  ---------------------------------------------------");
    printf("\n  Sistem Antrean Pendaftaran Pasien Rumah Sakit UNISA  \n");
    printf("  ---------------------------------------------------\n");

    do {
        printf("\nMenu:\n");
        printf("1. Tambah Pasien ke Antrean\n");
        printf("2. Panggil Pasien Berikutnya\n");
        printf("3. Tampilkan Daftar Antrean\n");
        printf("4. Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);
        getchar();  

        switch (pilihan) {
            case 1:
                if (akhir < MAX_PATIENTS) {
                    printf("Masukkan nama pasien: ");
                    fgets(nama, sizeof(nama), stdin);
                    nama[strcspn(nama, "\n")] = '\0';  
                    enqueue(antrian, &akhir, nama);
                } else {
                    printf("Antrean penuh! Tidak bisa menambah pasien.\n");
                }
                break;

            case 2:
                if (awal < akhir) {
                    dequeue(antrian, &awal, &akhir);
                } else {
                    printf("Antrean kosong! Tidak ada pasien yang bisa dipanggil.\n");
                }
                break;

            case 3:
                daftar_antrian(antrian, awal, akhir);
                break;

            case 4:
                printf("Keluar dari sistem...\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan pilih antara 1-4.\n");
                break;
        }
    } while (pilihan != 4);

    

    return 0;
}

// Fungsi untuk menambah pasien ke antrean
void enqueue(char antrian[][MAX_NAME_LEN], int *akhir, char *nama) {
    strcpy(antrian[*akhir], nama);
    (*akhir)++;
    printf("Pasien %s berhasil ditambahkan ke antrean.\n", nama);
}

// Fungsi untuk menghapus pasien dari antrean (memanggil pasien)
void dequeue(char antrian[][MAX_NAME_LEN], int *awal, int *akhir) {
    printf("Memanggil pasien: %s\n", antrian[*awal]); 
    (*awal)++;

    // Reset antrean jika kosong
    if (*awal == *akhir) {
        *awal = *akhir = 0;
    }
}

// Fungsi untuk menampilkan antrean pasien saat ini
void daftar_antrian(char antrian[][MAX_NAME_LEN], int awal, int akhir) {
    if (awal == akhir) {
        printf("Antrean kosong!\n");
    } else {
        printf("Daftar Antrean Pasien:\n");
        for (int i = awal; i < akhir; i++) {
            printf("%d. %s\n", i - awal + 1, antrian[i]);
        }
    }
}

