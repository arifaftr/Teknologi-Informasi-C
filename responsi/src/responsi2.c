#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tambahData() {
    FILE *file;
    char nama[50], keluhan[100], dokter[50], tanggal[20], obat[50];
    int umur, bb, tb;
    
   
    file = fopen("Rekam_Medis_Pasien.csv", "a+");
    if (file == NULL) {
        printf("Gagal membuka file Rekam_Medis_Pasien.csv!\n");
        return;
    }
    
    printf("\n=== Tambah Data Rekam Medis ===\n");
    printf("Nama Pasien          : ");
    scanf(" %[^\n]", nama); 
    printf("Umur Pasien          : ");
    scanf("%d", &umur);
    printf("Berat Badan          : ");
    scanf("%d", &bb);
    printf("Tinggi Badan         : ");
    scanf("%d", &tb);
    printf("Keluhan              : ");
    scanf(" %[^\n]", keluhan);
    printf("Dokter Penanggung    : ");
    scanf(" %[^\n]", dokter);
    printf("Tanggal (DD/MM/YYYY) : ");
    scanf(" %[^\n]", tanggal);
    
    
    fprintf(file, "%s,%d,%d,%d,%s,%s,%s,-\n", nama, umur, bb, tb, keluhan, dokter, tanggal, obat);
    printf("Data berhasil ditambahkan!\n");
    
    fclose(file); 
}

void updateData() {
    FILE *file, *tempFile;
    char namaCari[50], buffer[256];
    char nama[50], keluhan[100], dokter[50], tanggal[20];
    int umur, bb, tb, ditemukan = 0;

    printf("Masukkan Nama Pasien yang akan diupdate: ");
    scanf(" %[^\n]", namaCari);

    file = fopen("Rekam_Medis_Pasien.csv", "r");
    tempFile = fopen("temp.csv", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Gagal membuka file!\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        sscanf(buffer, "%[^,],%d,%d,%d,%[^,],%[^,],%[^\n]",
               nama, &umur, &bb, &tb, keluhan, dokter, tanggal);

        if (strcmp(nama, namaCari) == 0) {
            printf("Data ditemukan. Masukkan data baru:\n");
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

            fprintf(tempFile, "%s,%d,%d,%d,%s,%s,%s\n", nama, umur, bb, tb, keluhan, dokter, tanggal);
            ditemukan = 1;
        } else {
            fprintf(tempFile, "%s", buffer);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("Rekam_Medis_Pasien.csv");
    rename("temp.csv", "Rekam_Medis_Pasien.csv");

    if (ditemukan)
        printf("Data berhasil diperbarui!\n");
    else
        printf("Data tidak ditemukan!\n");
}

void hapusData() {
    FILE *file, *tempFile;
    char namaCari[50], buffer[256];
    char nama[50], keluhan[100], dokter[50], tanggal[20];
    int umur, bb, tb, ditemukan = 0;

    printf("Masukkan Nama Pasien yang akan dihapus: ");
    scanf(" %[^\n]", namaCari);

    // Membuka file utama dan file sementara
    file = fopen("Rekam_Medis_Pasien.csv", "r");
    tempFile = fopen("temp.csv", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Gagal membuka file!\n");
        return;
    }

    // Membaca dan menyalin data, kecuali data yang akan dihapus
    while (fgets(buffer, sizeof(buffer), file)) {
        sscanf(buffer, "%[^,],%d,%d,%d,%[^,],%[^,],%[^\n]",
               nama, &umur, &bb, &tb, keluhan, dokter, tanggal);

        if (strcmp(nama, namaCari) == 0) {
            ditemukan = 1; // Tandai bahwa data ditemukan
            printf("Data atas nama '%s' berhasil dihapus.\n", nama);
        } else {
            fprintf(tempFile, "%s", buffer); // Salin data selain yang akan dihapus
        }
    }

    fclose(file);
    fclose(tempFile);

    // Mengganti file lama dengan file baru
    remove("Rekam_Medis_Pasien.csv");
    rename("temp.csv", "Rekam_Medis_Pasien.csv");

    if (!ditemukan) {
        printf("Data dengan nama '%s' tidak ditemukan.\n", namaCari);
    }
}

void lihatData() {
    FILE *file;
    char buffer[256];
    
    
    file = fopen("Rekam_Medis_Pasien.csv", "r+");
    if (file == NULL) {
        printf("File Rekam_Medis_Pasien.csv tidak ditemukan!\n");
        return;
    }
    
    printf("\n=== Data Rekam Medis ===\n");
    printf("Nama,Umur,berat badan,tinggi badan,Keluhan,Dokter,Tanggal\n");
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer); // Cetak isi file baris per baris
    }
    
    fclose(file); 
}

void metodePembayaran(char *namaPasien, char *jenisMember, float totalBiaya) {
    FILE *filePembayaran;
    int metode;
    char metodePembayaran[20], tanggal[20];
    int konfirmasi;

    // Hitung diskon berdasarkan jenis member
    if (strcmp(jenisMember, "gold") == 0) {
        totalBiaya *= 0.85; // Diskon 15%
    } else if (strcmp(jenisMember, "silver") == 0) {
        totalBiaya *= 0.90; // Diskon 10%
    } else if (strcmp(jenisMember, "bronze") == 0) {
        totalBiaya *= 0.95; // Diskon 5%
    }

    printf("\n=== Metode Pembayaran ===\n");
    printf("1. QRIS\n");
    printf("2. Bank Transfer\n");
    printf("3. Cash\n");
    printf("Pilih metode pembayaran (1-3): ");
    scanf("%d", &metode);

    switch (metode) {
        case 1:
            strcpy(metodePembayaran, "QRIS");
            printf("Tampilkan QR code untuk pembayaran QRIS.\n");
            break;
        case 2:
            strcpy(metodePembayaran, "Bank Transfer");
            printf("Masukkan nomor rekening bank: 1234567890.\n");
            break;
        case 3:
            strcpy(metodePembayaran, "Cash");
            printf("Pastikan pembayaran tunai diterima.\n");
            break;
        default:
            printf("Metode pembayaran tidak valid.\n");
            return;
    }

    printf("Total Biaya setelah diskon (%s member): Rp%.2f\n", jenisMember, totalBiaya);
    printf("Apakah pembayaran berhasil? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &konfirmasi);

    if (konfirmasi == 1) {
        printf("Masukkan tanggal pembayaran (DD/MM/YYYY): ");
        scanf(" %[^\n]", tanggal);

        // Simpan data pembayaran ke file
        filePembayaran = fopen("Riwayat_Pembayaran.csv", "a+");
        if (filePembayaran == NULL) {
            printf("Gagal membuka file Riwayat_Pembayaran.csv!\n");
            return;
        }
        fprintf(filePembayaran, "%s,%s,%.2f,%s,%s\n", namaPasien, jenisMember, totalBiaya, metodePembayaran, tanggal);
        fclose(filePembayaran);

        printf("Pembayaran berhasil dicatat!\n");
    } else {
        printf("Pembayaran belum berhasil.\n");
    }
}

void member(){
    char member[10], jenis_member[10];
    printf("Apakah anda punya member (ya/tidak)? ");
    scanf("%s", &member);

    if (strcmp(member, "ya") == 0 || strcmp(member, "Ya") == 0 || strcmp(member, "YA") == 0)
    {
        printf("Apakah jenis member anda (gold/silver/bronze)? ");
        scanf("%s", &jenis_member);

        if (strcmp(jenis_member, "gold") == 0 || strcmp(jenis_member, "Gold") == 0 || strcmp(jenis_member, " GOLD") == 0)
        {
            printf("Anda mendapat potongan 15%%\n");
        }
        else if (strcmp(jenis_member, "silver") == 0 ||strcmp(jenis_member, "Silver") == 0 || strcmp(jenis_member, " SILVER") == 0)
        {
            printf("Anda mendapat potongan 10%%");
        }
        else if (strcmp(jenis_member, "bronze") == 0 || strcmp(jenis_member, "Bronze") == 0 || strcmp(jenis_member, "BRONZE") == 0)
        {
            printf("Anda mendapat potongan 5%%");
        }
        else
        {
            printf("Salah Input\n");
        }
    }
    else if (strcmp(member, "tidak") == 0 || strcmp(member, "Tidak") == 0 || strcmp(member, "TIDAK") == 0)
    {
        printf("Anda tidak dapat potongan\n");
    }
    
    
}

void beriObat() {
    FILE *file, *tempFile;
    char namaCari[50], buffer[256];
    char nama[50], keluhan[100], dokter[50], tanggal[20], obat[100], existingObat[100] = "-";
    int umur, bb, tb, ditemukan = 0;

    printf("\n=== Berikan Obat ===\n");
    printf("Masukkan Nama Pasien: ");
    scanf(" %[^\n]", namaCari);

    // Membuka file utama untuk membaca dan file sementara untuk menulis
    file = fopen("Rekam_Medis_Pasien.csv", "r");
    tempFile = fopen("temp.csv", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Gagal membuka file!\n");
        return;
    }

    // Membaca data dan memprosesnya
    while (fgets(buffer, sizeof(buffer), file)) {
        // Membaca data pasien dari file
        sscanf(buffer, "%[^,],%d,%d,%d,%[^,],%[^,],%[^,],%[^\n]",
               nama, &umur, &bb, &tb, keluhan, dokter, tanggal, existingObat);

        if (strcmp(nama, namaCari) == 0) {
            ditemukan = 1; // Tandai bahwa pasien ditemukan
            printf("Pasien ditemukan: %s\n", nama);
            printf("Keluhan: %s\n", keluhan);
            printf("Obat yang sudah diberikan: %s\n", existingObat);

            // Memasukkan daftar obat baru
            printf("Masukkan obat yang akan diberikan (pisahkan dengan koma jika lebih dari satu): ");
            scanf(" %[^\n]", obat);

            // Gabungkan obat baru dengan obat yang sudah ada
            if (strcmp(existingObat, "-") != 0) {
                strcat(existingObat, ", ");
            }
            strcat(existingObat, obat);

            // Tulis data pasien yang diperbarui ke file sementara
            fprintf(tempFile, "%s,%d,%d,%d,%s,%s,%s,%s\n",
                    nama, umur, bb, tb, keluhan, dokter, tanggal, existingObat);
        } else {
            // Tulis data pasien yang tidak diubah
            fprintf(tempFile, "%s", buffer);
        }
    }

    fclose(file);
    fclose(tempFile);

    // Ganti file lama dengan file baru
    remove("Rekam_Medis_Pasien.csv");
    rename("temp.csv", "Rekam_Medis_Pasien.csv");

    if (ditemukan) {
        printf("Obat berhasil diperbarui untuk pasien '%s'.\n", namaCari);
    } else {
        printf("Pasien dengan nama '%s' tidak ditemukan!\n", namaCari);
    }
}

int main() {
    int pilihan;
    char namaPasien[50];
    float totalBiaya;
    char jenisMember[10];
                
    
    printf("=====================================\n");
    printf("|         DENTAL CARE UNISA         |\n");
    printf("=====================================\n");
    printf("\nSelamat datang di aplikasi Dental Care Unisa!\n");
    member();
    
    do {
        
        printf("\nMenu:\n");
        printf("1. Tambah Data\n");
        printf("2. Update Data\n");
        printf("3. Lihat Semua Data Rekam Medis\n");
        printf("4. Hapus Data\n");
        printf("5. Metode Pembayaran\n");
        printf("6. Berikan Obat kepada Pasien\n");
        printf("7. Keluar\n");
        printf("Pilih menu (1-7): ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                tambahData();
                break;
            case 2:
                updateData();
                break;
            case 3:
                lihatData();
                break;
            case 4:
                hapusData();
                break;
            case 5:
                printf("Masukkan nama pasien: ");
                scanf(" %[^\n]", namaPasien);
                printf("Masukkan jenis member (gold/silver/bronze): ");
                scanf("%s", jenisMember);
                printf("Masukkan total biaya awal: ");
                scanf("%f", &totalBiaya);
                metodePembayaran(namaPasien, jenisMember, totalBiaya);
                break;
            case 6:
                beriObat();
                break;
            case 7:
                printf("Terima kasih telah menggunakan aplikasi ini!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 7);
    
    return 0;
}
