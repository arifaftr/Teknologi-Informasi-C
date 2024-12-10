#include <stdio.h>

int main() {
    int paket;
    float biaya_per_bulan[] = {150000, 250000, 500000}; // Harga paket
    float total_tagihan;
    int lama_pemakaian;  // Lama pemakaian dalam bulan

    // Menampilkan pilihan paket internet
    printf("Selamat datang di Program Tagihan Internet\n");
    printf("Pilih paket internet:\n");
    printf("1. Paket A - 10 Mbps - Rp 150.000/bulan\n");
    printf("2. Paket B - 20 Mbps - Rp 250.000/bulan\n");
    printf("3. Paket C - 50 Mbps - Rp 500.000/bulan\n");
    
    // Meminta input pilihan paket dari pengguna
    printf("Masukkan nomor paket yang dipilih (1/2/3): ");
    scanf("%d", &paket);
    
    // Meminta input lama pemakaian dalam bulan
    printf("Masukkan lama pemakaian dalam bulan: ");
    scanf("%d", &lama_pemakaian);

    // Menghitung total tagihan dengan indeks paket - 1
    total_tagihan = biaya_per_bulan[paket - 1] * lama_pemakaian;

    // Menampilkan hasil tagihan
    printf("\nPaket yang dipilih: Paket %c\n", 'A' + (paket - 1));
    printf("Lama pemakaian: %d bulan\n", lama_pemakaian);
    printf("Total tagihan internet: Rp %.2f\n", total_tagihan);

    return 0;
}
