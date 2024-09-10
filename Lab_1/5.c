#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    float y;
    scanf("%d",&x);
    y=sqrt(x);
    if(x>=0)
    {
        printf("Square root of %d is %.2f",x,y);
    }
    else
    {
        printf("Invalid input");
    }    
    return 0;
}