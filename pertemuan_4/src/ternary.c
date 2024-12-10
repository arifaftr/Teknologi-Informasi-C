#include <stdio.h>
#include <ctype.h>

int main()
{
    int jawaban;

    printf("Berapakah hasil dari 3+4?\n");
    printf("Jawab> ");
    scanf("%d", &jawaban);

    printf("Jawaban anda: %s", (jawaban == 7) ?
    "Benar" : "Salah");

}