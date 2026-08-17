 #include<stdio.h>

int main()
{
    int i, first = -1, last = -1;
    char ch, str[100];

    scanf("%s", str);
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d", last);

    return 0;
}