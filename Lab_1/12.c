#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int b, da, hra, g;
    scanf("%d", &b);
    da = b * 40 / 100;
    hra = b * 20 / 100;
    g = b + da + hra;
    printf("%d", g);
    return 0;
}
