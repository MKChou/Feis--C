#include <stdio.h>

int main(){
    int number;
    while (scanf("%d",&number) != 1){            //輸入成功 >>> 等於1 >>> 跳脫whlie迴圈
        printf("Error Ivalid input\n");
        fflush(stdin);
    }
    printf("%d\n",number);
}