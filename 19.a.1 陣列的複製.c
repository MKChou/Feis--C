#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int[10]);

int main(){
    int i, n[10],v[10];

    srand(time(0));

    for ( i=0; i<10; i++){
        n[i] = rand()%100;
    }

    for ( i=0; i<10; i++){
        v[i] = n[i];
    }

    printArray(n);
    printArray(v);

    return 0;
}

void printArray( int t[10]){
    int i;
    for ( i=0; i<10; i++){
        printf("%d ",t[i]);
    }
    printf("\n");
}