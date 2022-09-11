#include <stdio.h>

int main(){
    int a = 10;
    int b = 15;
    int *countAddress;

    countAddress = &a;
    *countAddress = 0;
    printf("New a: %d\n",a);
    printf("New a: %d\n",*countAddress);


    countAddress = &b;
    *countAddress = 0;
    printf("New b: %d\n",b);
    printf("New b: %d\n",*countAddress);
}