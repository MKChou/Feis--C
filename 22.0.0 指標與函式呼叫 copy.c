#include <stdio.h>

void addone(int *n){        //把 *a 叫進來        // n >>>a的位置
    *n = *n+1;              // *n >>>a的位置找值== a變數的值 == a == 3 
}

int main(){
    int a = 3;
    addone(&a);          //>>> &a >>> a的記憶體位置
    printf("%d",a);     // a 還是 3 >>> 給void的值是複製品
    return 0;
}   