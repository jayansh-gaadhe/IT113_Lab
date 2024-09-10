#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x && x > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
