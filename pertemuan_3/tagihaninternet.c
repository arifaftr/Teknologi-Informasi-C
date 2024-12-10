#include <stdio.h>

int main()
{
    char nama [20] = "arifa";
    int tagihan = 150000;
    int id_pelanggan = 12345;
    char alamat[20] = "gamping";
    int bayar;
    int hasil;

    printf("----------------------------");
    printf("\n|---- Tagihan Internet ----|");
    printf("\n----------------------------");
    printf("\n\nNama         = %s",nama);
    printf("\nID Pelanggan = %d", id_pelanggan);
    printf("\nAlamat       = %s",alamat);
    printf("\nTagihan anda = %d", tagihan);

    printf("\n\nBayar tagihan = ");
    scanf("%d", &bayar);

    hasil= tagihan - bayar;
    printf("Sisa tagihan anda = %d",hasil);

    return 0;
}