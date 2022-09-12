// 陣列歸零

#include <stdio.h>

int main(){
    int v[5]={5,6,7,8,9};
    int i;

    for (i=0; i<5; i++){
        printf("%d ",v[i]);
    }


    for ( i=0; i<5; i++){
        v[i] = 0;
    }
    printf("\n");

    for (i=0; i<5; i++){
        printf("%d ",v[i]);
    }
}