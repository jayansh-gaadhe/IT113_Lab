#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 65;
label:
    printf("%c [%d] ", i, i);
    if (i < 90)
    {
        i++;
        goto label;
    }

    return 0;
}
