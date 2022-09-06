#include <stdio.h>

void countTo3(int);

int main(){
    countTo3(1);
    return 0;
}

void countTo3(int i){
    if( i<=3 ){              // v.s 13.1.2
        countTo3(i+1);       // 交換              // 要先返回值之後才會printf >> 後面先印出來所以是3 2 1
        printf("%d\n",i);    // 交換
    }
}