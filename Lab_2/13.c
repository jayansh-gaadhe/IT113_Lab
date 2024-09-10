#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    do
    {
        scanf("%d", &n);
        if (n >= 0)
            sum += n;
    } while (n >= 0);
    printf("Sum:%d", sum);

    return 0;
}
