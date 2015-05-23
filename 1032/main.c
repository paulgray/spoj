#include <stdio.h>
#include <stdlib.h>

void dividers(long n, long x, long y)
{
    long i;

    for(i = x; i < n; i++)
    {
        if((i % x) == 0 && (i % y) != 0)
        {
            printf("%ld ", i);
        }
    }
    printf("\n");
}

int main()
{
    int t, i;
    long n, x, y;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%ld %ld %ld", &n, &x, &y);
        dividers(n, x, y);
    }

    return 0;
}
