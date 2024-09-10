#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year >= 1896 && year != 1944 && year <= 2024)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
