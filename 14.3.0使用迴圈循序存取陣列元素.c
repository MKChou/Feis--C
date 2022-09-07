#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i,max;
    int ver[5] = {1,0,9,4,8};

    max = ver[0];
    for ( i=1; i<=4; i++){
        if (ver[i]>=max){
            max = ver[i];
        }
    }

    printf("Max of Ver:%d",max);

    return 0;
}