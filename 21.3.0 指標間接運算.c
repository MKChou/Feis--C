#include <stdio.h>

int main(){
    int count = 9;
    int *countAddress = &count;

    printf("%d\n",count);
    printf("%d\n",countAddress);
    printf("%d\n",*countAddress);       //*countAddress >>> (int)
}