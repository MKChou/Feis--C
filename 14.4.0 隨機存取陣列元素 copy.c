#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int number[6]={0};
    int i,j;

    srand(time(0));
    for( i=1; i<6000; i++){
        int dice = rand()%6+1;       // ifrand 骰到 1
        number[dice-1]++;            // number[0]++ >>> 1的位置
    }

    for (j=1; j<=6; j++){
        printf("%d: %d\n",j,number[j-1]);
    }

    return 0;
}