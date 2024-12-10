#include <stdio.h>
#include <conio.h>
int main()
{ 
    printf("Kalkulator sederhana"); 

    int a, b, c, d, hasil;

    printf("\n\nMasukan nilai a = "); 
    scanf("%i", &a); 
    printf("\nMasukan nilai b = "); 
    scanf("%i", &b); 
    printf("\nMasukan nilai c = "); 
    scanf("%i", &c); 
    printf("\nMasukan nilai d = "); 
    scanf("%i", &d); 
    printf("\nnilai a = %i, b = %i, c = %i, d = %i", a, b, c, d); 

    printf("\n\nHasil perhitungan:\n"); 
    hasil = a + b; 
    printf("\nHasil dari a + b adalah %d\n", hasil); 
    hasil = c - d; 
    printf("\nHasil dari c - d adalah %d\n", hasil); 
    hasil = b * c; 
    printf("\nHasil dari b * c adalah %d\n", hasil); 
    hasil = a  / d; 
    printf("\nHasil dari a / d adalah %d\n", hasil); 
    hasil = a + b * c - d; 
    printf("\nHasil dari a + b * c - d adalah %d\n", hasil); 
    hasil = a * b + c / d; 
    printf("\nHasil dari a * b + c / d adalah %d\n", hasil); 
    
    getch();
    
} 