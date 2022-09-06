#include <stdio.h>

int i = 5;

int f(){
    i = i + 8;                    // i 用的是全域變數
    printf("ccc= %d\n",i);        // ccc = 5+8 = 13 
    return 0;
}

int main(){
    printf("aaa= %d \n",i);       // aaa = 5 = 全域變數
    int i = 3;
    i = i+1;                      // i 用的是區域變數
    printf("bbb= %d\n",i);        // bbb = 3+1 = 4 
    f();
    printf("eee= %d\n",i);        // eee = bbb = 3+1 = 4 ，i 是區域變數的 i 

    return 0;                     
}