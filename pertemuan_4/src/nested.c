#include <stdio.h>
#include <string.h>

int main()
{
    char username[30], password[30];

    printf("=== Account Login ===");
    printf("\nUsename : ");
    scanf("%s", username);
    printf("password : ");
    scanf("%s", password);

    if (strcmp(username, "unisa") == 0){
        if (strcmp(password, "1234") == 0){
            printf("Selamat Datang Bos!");
        }
        else{
            printf("Pasword salah!");
        }
        
    } else {
        printf("\nAnda belum terdaftar");
    }
}