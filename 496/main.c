#include <stdio.h>
#include <stdlib.h>

static int factorials[] = {0, 1, 0, 2, 0, 6, 2, 4, 2, 0, 2, 0, 4, 0, 2, 0, 8, 0};

int main()
{
    int inputsNo, i;
    long long n;

    scanf("%d", &inputsNo);
    for(i = 0; i < inputsNo; i++)
    {
        scanf("%lld", &n);
        if(n >= 10)
        {
            printf("0 0\n");
        }
        else if(n == 0)
        {
            printf("0 1\n");
        }
        else
        {
            printf("%d %d\n", factorials[(n-1)*2], factorials[(n-1)*2+1]);
        }
    }

    return 0;
}
