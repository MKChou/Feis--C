#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arrayPrint(int v[10]){
    int i;
    for (i=0; i<10; i++){
        printf("%d ",v[i]);
    }
}

int arrayMax(int v[10]){
    int i;
        int max = v[0];
    for ( i=0; i<10; i++){
        if ( v[i] > max ){
            max = v[i];
        }
    }
    return max;
}

int main(){
    srand(time(0));
    int v[10], i;
    for ( i=0; i<10; i++){
        v[i] = rand()%100;
    }

    arrayPrint(v);
    printf("\n");



    printf("Max: %d\n", arrayMax(v));

    return 0;
}

