// 陣列歸零

#include <stdio.h>

int main(){
    int v[5]={5,6,7,8,9};
    int i;
    int *p = v;

    for (i=0; i<5; i++){
        printf("%d ",v[i]);
    }


    for ( p=v; p!=&v[5]; p++){
        *p = 0;
    }
    printf("\n");

    for (i=0; i<5; i++){
        printf("%d ",v[i]);
    }
}