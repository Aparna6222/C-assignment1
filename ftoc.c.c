#include <stdio.h>

int main()
{
   float fahrenheit, convert;
   printf("\nEnter temperature in fahrenheit:");
   scanf("%f", &fahrenheit);
   convert = (fahrenheit - 32) * 5 / 9; // Formula  C=5.0/9(F-32)
   printf("\nTemperature in celsius: %f", convert);

   return 0;
}