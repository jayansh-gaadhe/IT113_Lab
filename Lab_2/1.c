#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x, y, a, sum, count = 0;
    sum = 0;
    scanf("%d", &n);
    x = n;
    y = n;
    for (; n != 0;)
    {
        n /= 10;
        count++;
    }
    while (y > 0)
    {
        a = y % 10;

        sum += pow(a, count);
        y /= 10;
    }
    (sum == x ? printf("YES") : printf("NO"));

    return 0;
}
