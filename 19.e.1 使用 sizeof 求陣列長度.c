#include <stdio.h>


void f(int [3]);                            // 原本的printf移到函式

int main(){
    int v[5] = {1,2,3,4,5};
    f(v);
    
    return 0;
}


void f(int v[3]){
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(4));
    printf("%d\n",sizeof(long int));
    printf("%d\n",sizeof(v));                // 不是陣列
    printf("%d\n",sizeof(v)/sizeof(v[0]));   // 元素個數
}