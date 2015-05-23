#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[2048];
    int i, len;

    while(fgets(word, sizeof(word), stdin))
    {
        len = strlen(word);
        for(i = len-1; i >= 0; i--)
        {
            printf("%c", word[i]);
        }
    }

    return 0;
}
