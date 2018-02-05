##include <stdio.h>

int main()
{
    char str[10];
    int i, l;
    printf("Enter  lines ");
    gets(str);

    i = 0;
    l = 1;
    while(str[i] != '\0')
    {
    if(str[i]=='\n'&& str[i]=='\t')
        {
            l++;
        }

        i++;
    }

    printf("\nTotal number of lines = %d", l);

    return 0;
}
