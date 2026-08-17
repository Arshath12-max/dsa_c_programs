#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp[200], hex[20], result[200];
    int i = 0, j = 0, count, len, k;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        count = 1;
        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        temp[j++] = str[i];
        sprintf(hex, "%x", count);

        for(k = 0; hex[k] != '\0'; k++)
            temp[j++] = hex[k];

        i++;
    }

    temp[j] = '\0';

    len = strlen(temp);

    for(i = 0; i < len; i++)
        result[i] = temp[len - 1 - i];

    result[len] = '\0';

    printf("%s", result);

    return 0;
}