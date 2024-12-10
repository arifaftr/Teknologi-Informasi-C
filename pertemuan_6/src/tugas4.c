#include <stdio.h>
#include <stdlib.h>

int main() {
    char data[5] = {'a', 'b', 'c', 'd', 'e'}; 
    int size = 5;                             
    int new_size;                              
    char *arraydinamis;         
    char element;                          
    int jumlahPenambahan;                     

    
    arraydinamis = (char *)malloc(size * sizeof(char));
    if (arraydinamis == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return 1;
    }

    
    for (int i = 0; i < size; i++) {
        arraydinamis[i] = data[i];
    }

    
    printf("Array awal: ");
    for (int i = 0; i < size; i++) {
        printf("%c ", arraydinamis[i]);
    }
    printf("\n");

    printf("Berapa elemen baru yang ingin ditambahkan? ");
    scanf("%d", &jumlahPenambahan);
    getchar(); 

    
    new_size = size + jumlahPenambahan;


    arraydinamis = (char *)realloc(arraydinamis, new_size * sizeof(char));
    if (arraydinamis == NULL) {
        printf("Gagal mengalokasikan memori tambahan.\n");
        return 1;
    }

    
    for (int i = size; i < new_size; i++) {
        printf("Masukkan elemen baru ke-%d: ", i - size + 1);
        scanf(" %c", &element); 
        arraydinamis[i] = element;
    }

    
    printf("Array setelah penambahan: ");
    for (int i = 0; i < new_size; i++) {
        printf("%c ", arraydinamis[i]);
    }
    printf("\n");

    
    free(arraydinamis);

    return 0;
}

