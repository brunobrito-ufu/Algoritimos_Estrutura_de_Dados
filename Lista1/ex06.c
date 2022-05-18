#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, v = 1;

    printf("<< Fatorial >>\n");

    for (i = 1; i <= 10; i++)
    {
        v = v * i;
        printf("%d! = %d\n", i, v);
    }

    return 0;
}
