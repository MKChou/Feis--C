#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,n,v[10];

    srand(time(0));

    for ( i=0; i<10; i++){
        v[i] = rand()%100;
    }
    
    for ( i=0; i<10; i++){
        printf("%d ",v[i]);
    }

    int max = v[0]; 
    for ( i=0; i<10; i++){
        if (v[i]>max){
            max = v[i];
        }
    }

    printf("\nMax:%d",max);

    return 0;
}