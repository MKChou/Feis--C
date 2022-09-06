/*
sum(N) = 1, if N=1
sum(N) = sum(N-1)+N, if N>1
*/

#include <stdio.h>

int sum(int);

int main(){
    int enter;

    printf("Enter a number: ");
    scanf("%d",&enter);    
    printf("Sum: %d",sum(enter));

    return 0;
}


int sum(int enter){
    if ( enter==1 ){
        return 1;
    }
    return sum(enter-1)+enter;
}
