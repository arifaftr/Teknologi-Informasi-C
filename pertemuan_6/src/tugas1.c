#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Masukkan karakter: ");
    c = getchar();

    if(isalpha(c)){
        putchar(c);
        printf(" adalah huruf\n"); 
    }
    else if (isalnum(c)){
        putchar(c);
        printf(" adalah angka\n");
    }
    else{
        putchar(c);
        printf(" adalah simbol\n");
    }

    if (islower(c)){
        printf("%c diubah menjadi huruf kapital : ", c);
        putchar(toupper(c));
    }
    else if (isupper(c)){
        printf("%c diubah menjadi huruf kecil : ", c);
        putchar(tolower(c));
    }
    return 0;
    
}
