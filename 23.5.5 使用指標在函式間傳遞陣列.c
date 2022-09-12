#include <stdio.h>

int max(int[3], int);      //吳彥祖 九湯鍋 研社 小赤佬 夜市

int main(){
    int v[3] = {6,63,53};
    printf("%d",max(v,3));
    return 0;
}

int max(int *a, int){
    int max = a[0], i;
    for (i=0; i<3; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}