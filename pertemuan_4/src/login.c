#include <stdio.h>
#include <string.h>

int main()
{
    char password [20];

    printf("=== Program Login ===");
    printf("\nMasukan password: ");
    scanf("%s", &password);

    if( strcmp(password, "kopi") == 0 )
    {
        printf("Selamat datang bos!\n");
    } else
    {
        printf("Password salah, coba lagi!\n");
    }
}