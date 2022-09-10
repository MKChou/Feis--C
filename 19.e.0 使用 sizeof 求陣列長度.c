#include <stdio.h>

int v[5] = {1,2,3,4,5};

int main(){
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(4));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(v));                // 陣列
    printf("%d\n",sizeof(v)/sizeof(v[0]));   // 元素個數
    return 0;
}