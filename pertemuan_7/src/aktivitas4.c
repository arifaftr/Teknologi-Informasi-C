#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp = fopen("operation.csv", "a+");
    char name [50];
    int accountno, amount;
    if (!fp)
    {
        printf("Can't open file\n");
        return 0;
    }

    printf("Enter Account Holder Name: ");
    scanf("%s", &name);
    printf("Enter Account Number: ");
    scanf("%d", &accountno);    
    printf("enter Available Amount: ");
    scanf("%d", &amount);

    fprintf(fp, "%s, %d, %d\n", name, accountno, amount);
    printf("\nNew Account added to record");
    fclose(fp);

    printf("\n\n\n");

    FILE* fpp = fopen("operation.csv", "r+");
    if (!fpp)
    {
        printf("Can't open file\n");
        return 0;
    }
    else
    {
        char buffer[1024];
        int row = 0;
        int column = 0;
        while (fgets(buffer, 1024, fpp))
        {
            column = 0;
            row++;

            if (row == 0)
                continue;

            char* value = strtok(buffer, ",");

            while (value)
            {
                if (column == 0)
                {
                    printf("Name: ");
                }

                if (column == 1)
                {
                    printf("\tAccount No. : ");
                }
                
                if (column == 2)
                {
                    printf("\tAmount : ");
                }
                printf("%s", value);
                value = strtok(NULL, ",");
                column++;
                
                
            }
            

            
        }
        fclose(fpp);
        
    }
    return 0;
    
    
}
