#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char x, y;
    scanf("%c %c", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("char1 = '%c'\nchar2 = '%c'\n", x, y);

    return 0;
}
