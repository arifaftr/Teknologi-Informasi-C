#include <stdio.h>

int main()
{
    char nama[10];
    float internet, jumlah_wifi, total_tagihan;
    int lama_penggunaan;

    printf("|------Tagihan Internet Rumah------|\n");
    printf("------------------------------------\n");
    printf("\ninput nama pengguna           : ");
    scanf("%s", &nama);
    printf("input internet perbulan       : ");
    scanf("%f", &internet);
    printf("input jumlah wifi             : ");
    scanf("%f", &jumlah_wifi);
    printf("input lama penggunaan (bulan) : ");
    scanf("%d", &lama_penggunaan);
    

    total_tagihan = internet*lama_penggunaan*jumlah_wifi;
    

    printf("\n\nnama pengguna        : %s", nama);
    printf("\ntagihan anda adalah  : Rp. %.2f\n", total_tagihan);
    printf("penggunaan internet  : %d bulan", lama_penggunaan);
    

    return 0;
    
}