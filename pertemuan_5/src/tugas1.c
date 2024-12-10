#include <stdio.h>

int main() {
    int i;
    printf("Bilangan berpangkat 2 dari 1 sampai 10:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}
