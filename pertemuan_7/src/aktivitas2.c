#include <stdio.h>
#include <string.h>


int main()
{
    FILE* filePointer;
    char dataToBeWritten[50] = "Dasar Pemrograman Praktikum Semester 1 ";

    filePointer = fopen("file-test.c", "w");

    if (filePointer == NULL)
    {
        printf("file-test.c file tidak dapat dibuka.");
    }
    else
    {
        printf("file sudah dibuka dan dapat dioperasikan.\n");
        if (strlen(dataToBeWritten) > 0)
        {
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        fclose(filePointer);

        printf("Data berhasil ditulis pada file file-test.c\n");
        printf("file sekarang ditutup.");
        
    }

    printf("\n\n");
    filePointer = fopen("file-test.c", "r");
    if (filePointer == NULL)
    {
        printf("file-test.c file tidak dapat dibuka.");
    }
    else
    {
        printf("file sudah dibuka dan dapat dioperasikan.\n");
        while (fgets(dataToBeWritten, 50, filePointer) != NULL)
        {
            printf("isi file-test.c adalah %s", dataToBeWritten);
        }

        fclose(filePointer);

        printf("berhasil membaca data pada file file-test.c\n");
        printf("file sekarang ditutup.");
        
    }
    return 0;
    
}

