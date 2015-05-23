#include <stdio.h>
#include <stdlib.h>

int main()
{
    long sum = 0;
    int i;

    while(scanf("%d", &i) != EOF)
    {
        sum += i;
        printf("%ld\n", sum);
    }

    return 0;
}
