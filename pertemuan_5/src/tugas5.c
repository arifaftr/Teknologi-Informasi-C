#include <stdio.h>

int main() {
    int jumlah_pasien, umur, jenis_pemeriksaan, tambahan;
    char nama[50];

    printf("-------------------------------------------------");
    printf("\n|  Selamat datang di Medical Check-Up RS UNISA  |\n");
    printf("-------------------------------------------------\n");
    printf("\nMasukkan jumlah pasien yang ingin diperiksa: ");
    scanf("%d", &jumlah_pasien);

    for (int i = 1; i <= jumlah_pasien; i++) {
        printf("\n--- Pasien ke-%d ---\n", i);

        printf("Masukkan nama pasien: ");
        scanf(" %[^\n]", nama);

        printf("Masukkan umur pasien: ");
        scanf("%d", &umur);

        
        if (umur < 12) {
            printf("Pemeriksaan dasar anak-anak.\n");
        } else if (umur <= 50) {
            printf("Pemeriksaan umum dewasa.\n");
        } else {
            printf("Pemeriksaan khusus lanjut usia.\n");
        }

        
        printf("\nPilih jenis pemeriksaan:\n");
        printf("1. Pemeriksaan Darah\n");
        printf("2. Pemeriksaan Jantung\n");
        printf("3. Pemeriksaan Mata\n");
        printf("Masukkan pilihan (1/2/3): ");
        scanf("%d", &jenis_pemeriksaan);

        switch (jenis_pemeriksaan) {
            case 1:
                printf("Anda memilih Pemeriksaan Darah.\n");
                break;
            case 2:
                printf("Anda memilih Pemeriksaan Jantung.\n");
                break;
            case 3:
                printf("Anda memilih Pemeriksaan Mata.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
                continue;
        }

     
        printf("\nApakah Anda ingin pemeriksaan tambahan?\n");
        printf("1. Ya\n");
        printf("2. Tidak\n");
        printf("Masukkan pilihan (1/2): ");
        scanf("%d", &tambahan);

        if (tambahan == 1) {
            printf("Pilih pemeriksaan tambahan:\n");
            printf("1. Pemeriksaan Gigi\n");
            printf("2. Pemeriksaan Tulang\n");
            printf("Masukkan pilihan (1-2): ");
            scanf("%d", &tambahan);

            if (tambahan == 1) {
                printf("Pemeriksaan tambahan: Pemeriksaan Gigi\n");
            } else if (tambahan == 2) {
                printf("Pemeriksaan tambahan: Pemeriksaan Tulang\n");
            } else {
                printf("Pilihan tidak valid untuk pemeriksaan tambahan.\n");
            }
        } else if (tambahan == 2) {
            printf("Tidak ada pemeriksaan tambahan.\n");
        } else {
            printf("Pilihan tidak valid.\n");
        }

        printf("\nData pasien atas nama %s telah berhasil disimpan.\n", nama);
    }

    printf("\nTerima kasih telah menggunakan layanan Medical Check-Up RS UNISA.\n");

    return 0;
}
