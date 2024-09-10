#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a - b >= 0 && a - c >= 0)
    {
        printf("Maximum: %d\n", a);
        if (b - c >= 0)
        {
            printf("Minimum: %d", c);
        }
        else
        {
            printf("Minimum: %d", b);
        }
    }
    else if (b - a >= 0 && b - c >= 0)
    {
        printf("Maximum: %d\n", b);
        if (a - c >= 0)
        {
            printf("Minimum: %d", c);
        }
        else
        {
            printf("Minimum: %d", a);
        }
    }
    else if (c - a >= 0 && c - b >= 0)
    {
        printf("Maximum: %d\n", c);
        if (a - b >= 0)
        {
            printf("Minimum: %d", b);
        }
        else
        {
            printf("Minimum: %d", a);
        }
    }

    return 0;
}
