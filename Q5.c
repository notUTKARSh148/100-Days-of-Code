//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float temp,ftemp;
    printf("enter temp in celcius : ");
    scanf("%f",&temp);
    ftemp=(temp*9/5)+32;
    printf(" temperature in fahrenheit: %f", ftemp);

    
    return 100;
} 