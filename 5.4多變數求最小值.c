#include <stdio.h>

int main()
{
    int a, b, c, min;
    printf("Please enter 2 number:");
    scanf("%d%d%d", &a, &b, &c);
    min = a;

    if (min > b)
    {
        min = b;
    }
    if (min > c)
    {
        min = c;
    }
    
    printf("Min:%d", min);
    return 0;
}