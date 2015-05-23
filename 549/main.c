#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j, n, acc, sum;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        sum = 0;
        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &acc);
            sum += acc;
        }

        printf("%d\n", sum);
    }

    return 0;
}
