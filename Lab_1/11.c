#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int a;
    scanf("%f %f", &x, &y);
    a = x + y;
    printf("%.2f\n%.2f\n%d", x, y, a);
    return 0;
}
