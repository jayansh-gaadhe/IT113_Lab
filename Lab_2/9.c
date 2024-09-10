#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, max = -2147483648;
    while (1)
    {
        scanf("%d", &x);
        printf("Enter an integer (enter '0' to stop):%d\n", x);

        if (x == 0)
        {
            break;
        }
        else
        {
            if (x >= max)
                max = x;
        }
    }

    printf("Maximum:%d", max);

    return 0;
}
