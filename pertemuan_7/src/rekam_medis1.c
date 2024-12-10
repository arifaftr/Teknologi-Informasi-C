#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp = fopen("Rekam_Medis_Klinik_Dokter_Aisyiyyah.csv", "a+");
    char name [50], riwayat, goldar;
    int umur, tb, bb, id_user;
    if(!fp) {
        printf("Can't open file\n");
        return 0;
    }

    printf("Input User ID: ");
    scanf("%d", &id_user);
    printf("Input Nama: ");
    scanf("%s", &name);
    printf("Input Umur: ");
    scanf("%d", &umur);
    printf("Input Tinggi Badan: ");
    scanf("%d", &tb);
    printf("Input Berat Badan: ");
    scanf("%d", &bb);
    printf("Input Riwayat Penyakit: ");
    scanf("%s", &riwayat);
    printf("Input Golongan Darah: ");
    scanf("%s", &goldar);
    
    //menyimpan data pada file
    fprintf(fp, "%d,%s,%d,%d,%s,%s\n", id_user, name, umur, tb, bb, riwayat);
    printf("\nData berhasil disimpan");
    fclose(fp);

    printf("\n\n\n");

    //membuka dan membaca file
    FILE* fpp = fopen("Rekam_Medis_Klinik_Dokter_Aisyiyyah.csv", "r+");
    if(!fpp) {
        printf("Can't open file\n");
        return 0;
    }
    else
    {
        char buffer[1024];
        int row = 0;
        int column = 0;
        while (fgets(buffer, 1024, fpp))
        {
            column = 0;
            row++;
            if (row == 0)
                continue;
            
            char* value = strtok(buffer, ", ");

            while (value){
                if (column == 0)
                {
                    printf("No.ID : ");
                }
                
                
            }
            
            
        }
    }
}
