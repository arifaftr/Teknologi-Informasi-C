#include <stdio.h>

int main()
{
    char grade;
    int nilai;

    printf("=== Program Grade Nilai === ");
    printf("\nInput nilai : ");
    scanf("%i", &nilai);

    if(nilai >= 90){
        grade ='A';
    } else if (nilai >= 80)
    {
       grade = 'B';
    } else if (nilai >= 70)
    {
        grade = 'B';
    } else if (nilai >= 60)
    {
        grade = 'C';
    } else if (nilai >= 50)
    {
        grade = 'C';
    } else if (nilai >= 40)
    {
        grade = 'D';
    } else if (nilai >= 30)
    {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("\nNilai      : %i\n", nilai);
    printf("Grade anda : %c", grade);
    
    
    
    
    
}