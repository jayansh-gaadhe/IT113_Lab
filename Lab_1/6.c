#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y)
    {
        printf("The smallest of %d and %d is %d", x, y, y);
    }
    else
    {
        printf("The smallest of %d and %d is %d", x, y, x);
    }
    return 0;
}
