#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;

    FILE* fptr;
    if ((fptr = fopen("program.bin", "wb")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    int flag = 0;
    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;

        flag = fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }

    if (!flag)
    {
        printf("Write Operation Failure");
    }
    else
    {
        printf("Write Operation Successful");
    }
    fclose(fptr);

    printf("\n\n");

    if ((fptr = fopen("program.bin", "rb")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    for ( n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
    
}

