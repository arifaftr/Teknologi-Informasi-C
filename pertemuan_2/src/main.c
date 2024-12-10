#include <stdio.h>

int main(void)
{ //Compound Statement
    printf("Program Konversi Suhu \n"); //exprssion statement

    float celc, fahr, kelv, ream ; //exprssion statement

    printf("Input suhu celcius: "); //exprssion statement
    scanf("%f", &celc); //exprssion statement
    printf("\n"); //exprssion statement

    fahr = (9.0/5.0 * celc) + 32; //Expression
    kelv = celc + 273.15; //Expression
    ream = celc * (4.0/5.0); //Expression

    printf("%.2f derajat Celcius = %.2f derajat Fahrenheit \n", celc, fahr); //exprssion statement
    printf("%.2f derajat Celcius = %.2f derajat Kelvin \n",celc,kelv); //exprssion statement
    printf("%.2f derajat Celcius = %.2f derajat Reamur \n", celc, ream); //exprssion statement

    return 0; 
}  //Compound Statement