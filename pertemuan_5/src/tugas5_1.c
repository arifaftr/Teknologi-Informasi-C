#include <stdio.h>

int main() {
    int pasien, umur, jenis, sistole, diastole;
    float tinggi, berat, tinggi_m, imt;
    char nama[50];

    printf("\n -----------------------------------------------------");
    printf("\n| Selamat Datang di Layanan Medical Check-Up RS UNISA |");
    printf("\n -----------------------------------------------------");
    printf("\nMasukkan jumlah pasien yang ingin diperiksa: ");
    scanf("%d", &pasien);
    

    for (int i = 1; i <= pasien; i++) {
        printf("\n( Data Diri Pasien ke-%d )\n", i);
        printf("Masukan nama pasien: ");
        scanf("%s", &nama);
        printf("Masukan umur pasien: ");
        scanf("%d", &umur);

        if (umur < 12)
        {
            printf("Pemerikasaan umum anak-anak.\n");
        } else if (umur <= 50)
        {
            printf("Pemeriksaan umum dewasa.\n");
        } else
        {
            printf("Pemeriksaan khusus lanjut usia.\n");
        }

        printf("\nPilih jenis pemeriksaan: ");
        printf("\n1. Periksa tekanan darah\n2. Pemeriksaan Indeks Massa Tubuh (IMT)");
        printf("\nMasukan pilihan (1/2): ");
        scanf("%d", &jenis);

        switch (jenis)
        {
        case 1:
            printf("\nAnda memilih pemeriksaan tekanan darah.\n");
            printf("(| Contoh : 120/80, Sistole 120, Diastole 80 |)\n");
            printf("Input Sistole : ");
            scanf("%d", &sistole);
            printf("Input Diastole : ");
            scanf("%d", &diastole);

            if (sistole < 90 && diastole < 60) {
                printf("Tekanan darah rendah (Hipotensi)\n");
                printf("\nSilahkan Konsultasikan ke Dokter.");
                }
             else if (sistole >= 90 && sistole <= 120 && diastole >= 60 && diastole <= 80) {
                    printf("Tekanan darah anda normal");
                    printf("\nPertahankan, dan tetap jaga kesehatan Anda!");
                }
            else if ((sistole >= 121 && sistole <= 139) || (diastole >= 81 && diastole <= 89)) {
                    printf("Anda mengalami Prahipertensi\n");
                    printf("\nSilahkan Konsultasikan ke Dokter.");
                }
            else if ((sistole >= 140 && sistole <= 159) || (diastole >= 90 && diastole <= 99)) {
                    printf("Anda mengalami Hipertensi Tingkat 1\n");
                    printf("\nSilahkan Konsultasikan ke Dokter.");
                }
            else if (sistole >= 160 || diastole >= 100) {
                    printf("Anda mengalami Hipertensi Tingkat 2\n");
                    printf("\nSilahkan Konsultasikan ke Dokter.");
                }
            else {
                    printf("Data tidak valid\n");
                }

            break;
        case 2:
            printf("\nAnda memilih pemeriksaan Indeks Massa Tubuh (IMT).\n");
            printf("Input Tinggi Badan : ");
            scanf("%f", &tinggi);
            printf("Input Berat Badan : ");
            scanf("%f", &berat);
            
            //konversi tinggi badan ke meter
            tinggi_m = tinggi / 100;

            //hitung IMT
            imt = berat / (tinggi_m * tinggi_m);

            if (imt < 18.5)
            {
                printf("Berat Badan Anda Kurang.");
                printf("\nSilahkan Konsultasikan ke Dokter.");
            }
            else if (imt >=18.5 && imt<= 24.9)
            {
                printf("Berat Badan Anda Normal.");
                printf("\nPertahankan, dan Tetap jaga kesehatan anda!");
            }
            else
            {
                printf("Berat Badan Anda Berlebih.");
                printf("\nSilahkan Konsultasikan ke Dokter.");
            }

            break;
        default:
            printf("Pilihan tidak tersedia.\n");
            break;

        
        }
        printf("\nData Pasien atas nama %s telah disimpan.\n", &nama);
    }
    printf("\nTerimakasih telah menggunakan layanan kami.\n");
}
        
