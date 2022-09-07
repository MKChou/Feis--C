#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int number[12]= {0};
    int i,sum;

    srand(time(0));
    for ( i=1; i<=100000; i++){
        sum = rand()%6+1 + rand()%6+1;
        number[sum-1]++;
    }
    
    for ( i=2; i<=12; i++){
        printf("%d: %d\n",i,number[i-1]);
    }








}