#include <stdio.h>

int k=0;                       //在函式定義之外宣告定義變數

int count(void){
    k++;                      //每次呼叫都存取同一個全域變數
    return k;
}


int main() {
    for ( int i=1; i<=5; i++){
        printf("%d\n",count());       
    }
}