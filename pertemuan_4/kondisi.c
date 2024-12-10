#include <stdio.h>
int main(){
    int nilai;

    printf("input nilai ujian : ");
    scanf("%d", &nilai);
    if (nilai >= 91 && nilai <=100)
    {
        printf("\nanda lulus! nilai A+");
    } 
    else if (nilai >= 81 && nilai <=90 )
    {
        printf("Anda lulus! nilai A");
    }
    else if (nilai >= 71 && nilai <=80 )
    {
        printf("Anda lulus! nilai B+");
    }
    else if (nilai >= 61 && nilai <=70 )
    {
        printf("Anda lulus! nilai B");
    }
    else
    {
        printf("\nAnda tidak lulus");
    }
}