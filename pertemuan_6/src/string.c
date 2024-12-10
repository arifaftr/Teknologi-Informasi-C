#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lenght, i, s_len, rand_num = 0;
    char password;
    const char search[] = "abcdefghijklmnopqrstuvwxyz";

    srand(time(NULL));
    s_len = strlen(search);
    printf("Enter the lenght of password: ");
    scanf("%d", &lenght);
    if (lenght < 8 || lenght > 32){
        printf("Password Lenght should be 8 to 32 char: ");

    }
    else{
        printf("Your password is: \n");
        for ( i = 0; i < lenght; i++){
            rand_num = rand() % s_len;
            password = search[rand_num];
            printf("%c", password);
        }
    }
    return 0;
}

