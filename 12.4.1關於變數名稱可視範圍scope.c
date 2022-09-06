#include <stdio.h>

int i=999 ;

int main() {
    printf("1: %d\n",i);
    i = 333;
    printf("2: %d\n",i);
    {
        printf("3: %d\n",i);
        i = 666 ;
        printf("4: %d\n",i);
    }
    printf("5: %d\n",i);
    return 0;
}
