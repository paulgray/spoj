#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ints[1024];
    int i = 0;

    while(scanf("%d", &ints[i++]) != EOF) {}
    i--;
    if(i > 0)
    {
        while(--i > 0) printf("%d ", ints[i]);
        printf("%d\n", ints[0]);
    }

    return 0;
}
