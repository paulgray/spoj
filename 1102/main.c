#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, i, j, n, sum;
    int pos;
    int ints[128];
    double avg, diff;

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        sum = 0;
        pos = 0;
        diff = 101;

        scanf("%d", &n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &ints[j]);
            sum += ints[j];
        }
        avg = (double)sum/n;

        for(j = 0; j < n; j++)
        {
            if(fabsf(ints[j] - avg) < diff)
            {
                diff = fabsf(ints[j] - avg);
                pos = j;
            }
        }

        printf("%d\n", ints[pos]);
    }

    return 0;
}
