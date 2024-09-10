#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, num, count = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Prime");
    }
    return 0;
}
