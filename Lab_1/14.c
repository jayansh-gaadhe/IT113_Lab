#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float km, f, m, i, cm;
    scanf("%f", &km);
    f = km * 3280.84;
    m = km * 1000;
    i = km * 39370.1;
    cm = km * 100000;
    printf("In feet: %.2f\nIn meters: %.2f\nIn inches: %.2f\nIn centimeters: %.2f\n", f, m, i, cm);
    return 0;
}
