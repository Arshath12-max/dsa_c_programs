 #include <stdio.h>
#include <string.h>

int main()
{
    int n, i, found = 0;
    char names[100][50], key[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%s", names[i]);

    scanf("%s", key);

    for(i = 0; i < n; i++)
    {
        if(strcmp(names[i], key) == 0)
        {
            printf("Name found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Name not found");

    return 0;
}