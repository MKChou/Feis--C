#include <stdio.h>

// 用sizeof計算記憶體空間大小

int main(){
    int v[3] = {4,5,6};
    printf("%zu\n",sizeof(v));             // sizeof(int[3])         三個元素的整數陣列
    printf("%zu\n",sizeof(v[0]));          // sizeof(int)            
    printf("%zu\n",sizeof(&v[0]));         // sizeof(int*)
    printf("%zu\n",sizeof(&v));            // sizeof(int(*)[3])
}