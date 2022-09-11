#include <stdio.h>

int max2(int*, int*);

int main()
{
    int a, b;
    printf("Please enter 2 number:");
    scanf("%d %d",&a, &b);
    printf("Max: %d", max2(&a, &b));
    return 0;
}

int max2(int *x, int *y){
    int max;
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}