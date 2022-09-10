#include <stdio.h>

int main(){
    int count =9;
    int a;
    int *b;

    a = count; // (O) >>> (int) = (int)
    //b = count; // (X) >>> (int *) != (int)
    b = &a;

    printf("%p\n",&a);   // a儲存的位置
    printf("%p\n",b);    // b儲存的位置

    return 0;
}

