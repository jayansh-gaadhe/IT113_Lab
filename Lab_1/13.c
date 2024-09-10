#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4, n5, mean;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    mean = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("%d", mean);
    return 0;
}
