#include <stdio.h>

int main()
{
    char str[10];
    int i, w;
    printf("Enter any string: ");
    gets(str);

    i = 0;
    w = 1;
    while(str[i] != '\0')
    {
    if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            w++;
        }

        i++;
    }

    printf("Total number of words = %d", w);

    return 0;
}
