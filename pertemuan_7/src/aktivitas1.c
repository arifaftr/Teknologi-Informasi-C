#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr = fopen("file.txt", "w");
    if (fptr == NULL){
        printf("File tidak dapat dibuka");
        exit(0);
    }
    else {
        printf("program berhasil dibuat");
    }
    return 0;
}
