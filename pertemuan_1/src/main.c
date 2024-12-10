#include <stdio.h>

int main()
{
    char nama [20];
    char nama_panggilan [10];
    int umur;
    char asal [20];
    int tinggi_badan;
    int berat_badan;
    char golongan_darah [10];
    char hobi [20];
    char makanan_favorit[50];
    char minuman_favorit[50];
    char warna[20];
    char hewan[20];
    char idola [10];
    char olahraga [20];
    char genre [20];
    

    // printf("Hello World");
    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Nama panggilan : ");
    fgets(nama_panggilan, sizeof(nama_panggilan), stdin);
    printf("Umur : ");
    scanf("%d" , &umur);
    getchar();

    printf("askot : ");
    scanf("%s", asal);
    getchar();

    printf("tinggi badan : ");
    scanf("%d", &tinggi_badan);
    getchar();

    printf("berat badan : ");
    scanf("%d", &berat_badan);
    getchar();

    printf("Goldar : ");
    fgets(golongan_darah,sizeof(golongan_darah), stdin);
    printf("Hobi : ");
    fgets(hobi, sizeof(hobi), stdin);
    printf("Makanan : ");
    fgets(makanan_favorit, sizeof(makanan_favorit), stdin);
    printf("Minuman : ");
    fgets(minuman_favorit,sizeof(minuman_favorit), stdin);
    printf("Warna : ");
    fgets(warna,sizeof(warna), stdin);
    printf("Hewan : ");
    fgets(hewan,sizeof(hewan), stdin);
    printf("Idola : ");
    fgets(idola,sizeof(idola), stdin);
    printf("Olahraga : ");
    fgets(olahraga,sizeof(olahraga), stdin);
    printf("Genre Film : ");
    fgets(genre,sizeof(genre), stdin);
    
    

    

    

    printf("\n\n|---Data Diri---|");
    printf("\nNama lengkap saya adalah %s", nama);
    printf("Biasa dipanggil %s"  , nama_panggilan);
    printf("Umur saya sekarang adalah %d Tahun\n", umur);
    printf("Saya berasal dari Kota %s\n", asal);
    printf("tinggi badan saya adalah %d cm\n", tinggi_badan);
    printf("dan berat badan saya adalah %d kg\n", berat_badan);
    printf("saya memiliki golongan darah %s", golongan_darah);
    printf("Hobi saya adalah %s", hobi);
    printf("Makanan favorit saya adalah %s",makanan_favorit);
    printf("minuman yang saya sukai adalah %s", minuman_favorit);
    printf("Warna favorit saya %s", warna);
    printf("hewan kesukaan saya adalah %s", hewan);
    printf("idola saya adalah %s", idola);
    printf("olaharaga yang saya sukai adalah %s", olahraga);
    printf("Genre film yang saya sukai adalah genre %s", genre);
    
   

    return 0;
}