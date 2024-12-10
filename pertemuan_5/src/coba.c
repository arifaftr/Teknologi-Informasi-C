#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; // Jumlah baris segitiga

    // Perulangan luar untuk baris
    for(i = 1; i <= rows; i++) {
        // Perulangan untuk mencetak spasi
        for(j = i; j < rows; j++) {
            printf(" ");
        }
        
        // Perulangan untuk mencetak bintang
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Pindah ke baris baru setelah mencetak bintang
        printf("\n");
    }

    return 0;
}
