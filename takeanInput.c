#include <stdio.h>

int main()
{   
    float celcius, farhenheit;
    printf("%s", "Enter the Temperature in Celcius \n");
    scanf("%f", &celcius);

    printf("\n Enter the Temperature in Farhenhiet \n");
    scanf("%f", &farhenheit);


    float celcius_converted, farhenhiet_converted;

    celcius_converted = 0.5555 * (farhenheit - 32);
    farhenhiet_converted = 1.8 * celcius + 32;

    printf("%f Celcius in Farhenhiet is %f \n", celcius, farhenhiet_converted);
    printf("%f Farhenhiet in Celcius is %f \n", farhenheit, celcius_converted);
}
