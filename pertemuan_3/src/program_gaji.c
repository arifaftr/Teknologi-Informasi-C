#include <stdio.h>

int main()
{
    char nama[10];
    float gaji_pokok, transport, tunjangan, gaji, hasil, pajak;

    printf("Program Menghitung Gaji Karyawan\n");
    printf("--------------------------------\n");
    printf("input nama karyawan : ");
    scanf("%s", &nama);
    printf("input gaji pokok    : ");
    scanf("%f", &gaji_pokok);
    printf("input transport     : ");
    scanf("%f", &transport);
    printf("input tunjangan     : ");
    scanf("%f", &tunjangan);

    gaji = gaji_pokok+transport+tunjangan;
    pajak = 0.025*gaji;
    hasil = gaji - pajak;

    printf("\ngaji anda adalah : %.2f\n", gaji);
    printf("gaji anda setelah dikurangi pajak adalah : %.2f\n", hasil);

    return 0;
    
}