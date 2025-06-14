#include <stdio.h>

int main()
{
   float fahrenheit, celcius ,kelvin;
   printf("\nEnter temperature in fahrenheit:");
   scanf("%f", &fahrenheit);
   celcius = (fahrenheit - 32) * 5 / 9; // Formula  C=5.0/9(F-32)
   printf("\nTemperature in celsius: %f", celcius);

   kelvin=celcius+273.15;
   printf("\nkelvin is %f",kelvin);

   return 0;
}