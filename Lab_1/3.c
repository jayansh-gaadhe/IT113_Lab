#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    printf("Sum = %.2f", x + y);
    printf("\nSubtraction = %.2f", x - y);
    printf("\nMultiplication = %.2f", x * y);
    printf("\nDivision = %.2f", x / y);
    return 0;
}
