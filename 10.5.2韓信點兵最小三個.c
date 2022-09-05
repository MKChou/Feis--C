#include <stdio.h>

int main(){
    int number;
    int max;
    int count = 0;

    printf("Max:");
    scanf("%d",&max);

    for ( number=1; number<=max && count!=3 ; number++){
        if( number%3==2 && number%5==3 && number%7==2){
            printf("%d ",number);
            count = count+1;

        }
    }
}