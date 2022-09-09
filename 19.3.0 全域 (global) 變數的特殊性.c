#include <stdio.h>

int i;             

//  int i=j >>>錯的  >>>全域變數被宣告的值都只能是純粹的數字

int main(){
    printf("%d",i);
}

// 全域變數未被宣告會自動初始化為0  (程式執行main之前就已將初始化全域變數未被宣告的值為0)

