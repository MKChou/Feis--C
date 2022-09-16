#include <stdio.h>

//在函式內傳遞陣列

void print(int(*q)[3]){
    int i;
    for ( i=0; i<sizeof(*q)/sizeof((*q)[0]); i++){            //sizeof(*q)/sizeof((*q)[0]) >>計算有多少個多少個元素
        printf("%d",(*q)[i]);
    }
    printf("\n");
}


int main(){
    int v[] = {1,2,3};
    printf(&v);
    
    return 0;
}