#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int u = 0, l = 0, o = 0, tmp;
    char x[500];
    scanf("%[^\n]%*c", x);
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] >= 'A' && x[i] <= 'Z')
            u++;
        else if (x[i] >= 'a' && x[i] <= 'z')
            l++;
        else if (x[i] != ' ')
            o++;
        else
            tmp++;
    }
    printf("Uppercase: %d Lowercase: %d Others: %d", u, l, o);

    return 0;
}
