#include <stdio.h>

int main()
{
    char nama [20];
    char nim [20];
    char kelas [50];
    char prodi [10];
    char angkatan [10];
    char umur [10];
    char line [10];
    char tb [10];
    char bb [10];
    char goldar [10]; 
    char agama [50];
    char warna [20];
    char cita_cita [20];
    char makanan [10];
    char minuman [10];

    //input data diri
    printf("Nama : ");
    scanf("%s", nama);
    printf("NIM : ");
    scanf("%s", nim);
    printf("kelas : ");
    scanf("%s", kelas);
    printf("Prodi : ");
    scanf("%s", prodi);
    printf("Angkatan : ");
    scanf("%s", angkatan);
    printf("Umur : ");
    scanf("%s", umur);
    printf("Tahun Lahir : ");
    scanf("%s", line);
    printf("Tinggi Badan : ");
    scanf("%s", tb);
    printf("Berat Badan : ");
    scanf("%s", bb);
    printf("Golongan Darah : ");
    scanf("%s", goldar);
    printf("Agama : ");
    scanf("%s", agama);
    printf("Warna : ");
    scanf("%s", warna);
    printf("Cita-cita : ");
    scanf("%s", cita_cita);
    printf("Makanan favorit : ");
    scanf("%s", makanan);
    printf("Minuman favorit : ");
    scanf("%s", minuman);

    //output data diri
    printf("\nNama saya adalah %s", nama);
    printf("\ndengan NIM %s", nim);
    printf("\nkelas praktikum %s", kelas);
    printf("\nProdi %s", prodi);
    printf("\nAngkatan %s\n", angkatan);
    printf("\nUmur saya %s Tahun", umur);
    printf("\nKelahiran Tahun %s", line);
    printf("\nTinggi badan saya %s cm", tb);
    printf("\nBerat badan saya %s kg", bb);
    printf("\nGolongan darah saya adalah %s\n", goldar);
    printf("\nAgama saya %s", agama);
    printf("\nWarna favorit saya adalah %s", warna);
    printf("\nCita-cita saya adalah ingin menjadi %s", cita_cita);
    printf("\nMakanan kesukaan saya adalah %s", makanan);
    printf("\nMinuman kesukaan saya adalah %s", minuman);

   
}