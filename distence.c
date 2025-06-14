#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float distance, a, b, c, d;

    printf("\nEnter The Coordinates of Point A:\n");

    printf("\nX - Axis Coordinate: \t");
    scanf("%f", &a);

    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &b);

    printf("\nEnter The Coordinates of Point B:\n");

    printf("\nx - Axis Coordinate:\t");
    scanf("%f", &c);

    printf("\nY - Axis Coordinate: \t");
    scanf("%f", &d);

    distance = sqrt((c - a) * (c - a) + (d - b) * (d - b));

    printf("\nDistance between Points A and B: %f\n", distance);

    return 0;
}