#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y, i, hcf = 0, lcm;
    scanf("%d %d", &x, &y);

    for (i = 1; i <= x || i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
            hcf = i;
    }

    lcm = (x * y) / hcf;
    printf("%d", lcm);

    return 0;
}
