#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, i, s, c;
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            s = pow(i, 2);
            c = pow(i, 3);
            printf("%d %d ", s, c);
        }
    }
    else
    {
        printf("N is not a positive number");
    }

    return 0;
}
