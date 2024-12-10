#include <stdio.h>

int main() {
    int i, j, k;
    
    
    for(i = 9; i >= 1; i -= 2) { 
        for ( k = 0; k < (9-i)/2; k++)
        {
            printf(" ");
        }
        
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
