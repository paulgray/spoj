#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    int inputsNo, testsNo;
    char input[128];
    int ints[100];

    fgets(input, sizeof(input), stdin);
    inputsNo = atoi(input);

    for(i = 0; i < inputsNo; i++)
    {
        scanf("%d", &testsNo);

        for(j = 0; j < testsNo; j++)
        {
            scanf("%d", &ints[j]);
        }
        for(j = testsNo-1; j > 0; j--)
        {
            printf("%d ", ints[j]);
        }
        printf("%d\n", ints[0]);
    }

    return 0;
}
