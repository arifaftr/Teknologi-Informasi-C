#include <stdio.h>
int main(){
    int test [2][3][2];
    printf("enter 12 value: ");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &test[i][j][k]);
            }
            
        }
    }
    printf("\nDisplaying values:\n");
    for (int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("test[%d][%d][%d] = %d\n ", test[i][j][k]);
            }
        }
        
    }
    return 0;
}
