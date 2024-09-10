#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}
