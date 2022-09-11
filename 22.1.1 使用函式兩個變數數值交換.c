#include <stdio.h>

void swap(int*, int*);

int main(){
    int a,b;

    printf("Please enter 2 number: ");
    scanf("%d%d",&a,&b);
    swap(&a, &b);              //1. &a=a的記憶體位置
    printf("%d %d", a,b);
}


void swap(int *x,int *y){       // 2. (int *)x >>> 抓a記憶體位置進來放到x
    int t;
    t = *x;                     // 3. x是a的記憶體位置(int *抓進來的記憶體位置參數) >>> 所以 *x 是真正的數值
    *x = *y;                    // 把b的數值*y放進*x
    *y = t;                     // 把a的數值*x放進*y
}