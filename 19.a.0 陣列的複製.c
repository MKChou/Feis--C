#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i, n[10],v[10];

    srand(time(0));

    for ( i=0; i<10; i++){
        n[i] = rand()%100;
    }

    for ( i=0; i<10; i++){
        v[i] = n[i];
    }

    printf("n[i]:");
    for ( i=0; i<10; i++ ){
        printf("%d ",n[i]);
        
    }
    printf("\nv[i]:");
        for ( i=0; i<10; i++ ){
        printf("%d ",v[i]);
        
    }

    return 0;
}