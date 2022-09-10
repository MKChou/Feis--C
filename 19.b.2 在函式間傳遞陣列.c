#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void arrayRand(int[10]);
int arrayMax(int[10]);
void arrayPrint(int[10]);



//main
int main(){
    int i,v[10];

    srand(time(0));

    arrayRand(v);
    arrayMax(v);
    arrayPrint(v);

    printf("\nMax:%d",arrayMax(v));
}


//Rand
void arrayRand( int v[10]){
    int i;
    for ( i=0; i<10; i++){
        v[i] = rand()%100;
    }
}


//print
void arrayPrint(int v[10]){
    int i;
    for ( i=0; i<10; i++){
        printf("%d ",v[i]);
    }
}


//Max
int arrayMax(int v[10]){
    int i, max=0;
     max = v[0];
    for( i=0; i<10; i++){
        if( v[i] > max){
        max =v[i];
        }
    }
    return max;
}



