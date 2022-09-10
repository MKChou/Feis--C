#include <stdio.h>

int main(){
    int number;
    printf("Enter:");          //輸入abc >>> 1 >>> 未定義行為
    scanf("%d",&number);
    printf("%d",number);
}