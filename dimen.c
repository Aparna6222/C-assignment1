#include <stdio.h>
int main()
{
  float length, width, height, SA, Volume;

  printf("\n Enter Length, Width and Height of a Cuboid\n");
  scanf("%f %f %f", &length, &width, &height);

  SA = 2 * (length * width + length * height + width * height);
  Volume = length * width * height;

  printf("\n The Surface Area of a Cuboid = %.2f\n", SA);
  printf("\n The Volume of a Cuboid = %.2f\n", Volume);

  return 0;
}