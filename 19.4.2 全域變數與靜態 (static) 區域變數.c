#include <stdio.h>


int count(void){
    static int k=0;   // 靜態(static)的區域變數只會有一份
    k++;              // 2. 用靜態(static)的區域變數來達到全域變數的效果      
    return k;
}


int main() {
    for ( int i=1; i<=5; i++){
        printf("%d\n",count());      // 1. 每次呼叫count但又不想把count裡的k直放在全域變數(可能會被影響) 
    }
    
    return 0;
}