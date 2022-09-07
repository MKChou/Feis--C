#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number[6]={0,0,0,0,0,0};                //宣告 number[0] ~ number[5] = 0
// 也等於 int number[]={0,0,0,0,0,0};          可以省略中括號內的數值。
// 也等於 int number[6]={0};                   第一個值要宣告，其他會宣告的值都等於0。

int main(){
    srand(time(0));
        int i;

    for ( i=1; i<=6000; i++){
        int dice = rand()%6+1;

        switch (dice)
        {
            case 1:
                number[0]++;
                break;
            case 2:
                number[1]++;
                break;
            case 3:
                number[2]++;
                break;
            case 4:
                number[3]++;
                break;
            case 5:
                number[4]++;
                break;
            case 6:
                number[5]++;
                break;
            
            default:
                printf("Error 404");
                break;
        }
    return 0;
    }
    printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d",number[0],number[1],number[2],number[3],number[4],number[5]);

    return 0;
}