#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void IsPrimeNo(long n)
{
    int isPrime = 1;
    long divider = 5;
    long limit = roundl(sqrt(n)+1);

    if(n < 2)
    {
        isPrime = 0;
    }
    else if(n < 4)
    {
        isPrime = 1;
    }
    else if((n % 2) == 0 || (n % 3) == 0)
    {
        isPrime = 0;
    }
    else
    {
        while(divider <= limit)
        {
            if((n % divider) == 0 || (n % (divider + 2)) == 0)
            {
                isPrime = 0;
                break;
            }

            divider += 6;
        }
    }

    if(isPrime)
    {
        printf("TAK\n");
    }
    else
    {
        printf("NIE\n");
    }
}

int main()
{
    long inputsNo = 0;
    char input[256];
    int i;

    fgets(input, sizeof(input), stdin);
    inputsNo = atol(input);

    for(i = 0; i < inputsNo; i++)
    {
        fgets(input, sizeof(input), stdin);
        IsPrimeNo(atol(input));
    }

    return 0;
}
