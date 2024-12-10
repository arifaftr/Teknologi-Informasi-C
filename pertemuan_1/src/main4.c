#include <stdio.h>

int main()
{
    char nama [20];
    char usia [20];
    char anak [50];
    char asal [20];
    char asal_sekolah [20];
    char kuliah [20];
    char prodi [20];
    char hobi [30];
    char warna [120];
    char tb [10];
    char bb [10];
    char makanan_favorit [20]; 
    char ukuran_sepatu [50];
    char goldar [10];
    char agama [10];

    //input data diri
    printf("Nama : ");
    scanf("%s", nama);
    printf("Usia : ");
    scanf("%s", usia);
    printf("Anak : ");
    scanf("%s", anak);
    printf("Asal : ");
    scanf("%s", asal);
    printf("Asal Sekolah : ");
    scanf("%s", asal_sekolah);
    printf("Kuliah : ");
    scanf("%s", kuliah);
    printf("Prodi : ");
    scanf("%s", prodi);
    printf("Hobi : ");
    scanf("%s", hobi);
    printf("Warna Favorit : ");
    scanf("%s", warna);
    printf("Tinggi Badan : ");
    scanf("%s", tb);
    printf("Berat Badan : ");
    scanf("%s", bb);
    printf("Makanan favorit : ");
    scanf("%s", makanan_favorit);
    printf("Ukuran sepatu : ");
    scanf("%s", ukuran_sepatu);
    printf("Golongan Darah : ");
    scanf("%s", goldar);
    printf("Agama : ");
    scanf("%s", agama);

    //output data diri
    printf("\nNama saya adalah %s", nama);
    printf("\nSaya berusia %s Tahun", usia);
    printf("\nSaya adalah anak %s", anak);
    printf("\nSaya berasal dari %s", asal);
    printf("\nAsal sekolah saya adalah %s", asal_sekolah);
    printf("\nSaya berkuliah di %s", kuliah );
    printf("\ndengan Program Studi %s\n", prodi);
    printf("\nHobi saya adalah %s", hobi);
    printf("\nWarna favorit saya adalah %s", warna);
    printf("\nTinggi badan saya adalah %s cm", tb);
    printf("\nBerat badan saya adalah %s cm", bb);
    printf("\nWarna favorit saya adalah %s", warna);
    printf("\nUkuran sepatu saya %s", ukuran_sepatu);
    printf("\nGolongan darah saya adalah %s", goldar);
    printf("\nSaya beragama %s", agama);

   
}