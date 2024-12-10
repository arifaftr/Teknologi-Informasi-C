#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];
    char reversed[100];
    
    printf("Masukkan sebuah kalimat: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int length = strlen(string);
    printf("Panjang kalimat: %d\n", length);

    for(int i = 0; i < length; i++) {
        reversed[i] = string[length - i - 1];
    }
    reversed[length] = '\0';  
    printf("Kalimat terbalik: ");
    fputs(reversed, stdout);
    printf("\n");

    for(int i = 0; i < length; i++) {
        string[i] = toupper(string[i]);
    }
    printf("Kalimat dalam huruf besar: ");
    fputs(string, stdout);
    printf("\n");

    return 0;
}
