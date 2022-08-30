#include <stdio.h>

void main()
{
    const double pi = 3.142;
    double r1, r2;

    printf("Big radius?\n");
    scanf("%lf", &r1);

    printf("Small radius?\n");
    scanf("%lf", &r2);

    double result = ((pi * r1 * r1) - (pi * r2 * r2)) / 4.0;

    printf("\nArea: %lf", result);
}