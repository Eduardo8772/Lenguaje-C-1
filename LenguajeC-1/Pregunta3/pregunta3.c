#include<stdio.h>
#include<string.h>
#define true 1

int main()
{
    int i, j;

    int a[1000][1000];
    int b[1000][1000];
    int x = 0;
    i = 0;
    while (true)
    {
        scanf_s("%d", &b[i]);
        scanf_s("%c", &ch);
        if (ch !='-')
        {
            x = (i+1);
            break;
        }
        i++;
    }
    printf("%d\n\n", x);

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < strlen(b[i]); j++)
        {
            printf("%d\n\n", b[i][j]);
        }
    }