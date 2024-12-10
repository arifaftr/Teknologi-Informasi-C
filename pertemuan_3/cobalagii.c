#include <stdio.h>
int main()
{
    char nama [50];
    int paket;
    float biaya_perbulan[] = {299000,425000,888000};
    float total_tagihan;
    int lama_pemakaian;



    printf("\n| --- Daftar Paket Internet IndiHome --- |");
    printf("\n------------------------------------------");
    printf("\n1. paket JITU 50 mbps     : 299.000/bulan ");
    printf("\n2. paket JITU 100 mbps    : 425.000/bulan ");
    printf("\n3. paket Dynamic 300 mbps : 888.000/bulan ");

    printf("\n\nInput nama pengguna : ");
    scanf("%s", &nama);

    printf("Input paket internet yang dipilih (1/2/3): ");
    scanf("%d", &paket);

    printf("Input lama penggunaan internet (bulan)     : ");
    scanf("%d", &lama_pemakaian);

    total_tagihan=biaya_perbulan[paket-1]*lama_pemakaian;

    printf("\n\nNama pengguna     = %s", nama);
    printf("\nPaket yang dipilih  = Paket %d", paket);
    printf("\npenggunaan internet = %d bulan", lama_pemakaian);
    printf("\ntotal tagihan anda  = Rp.%.2f", total_tagihan);

    return 0;

    
    

    
}