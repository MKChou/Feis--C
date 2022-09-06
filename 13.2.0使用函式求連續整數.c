#include <stdio.h>

sum(int);


int main(){
    int N;
    printf("N= ");
    scanf("%d",&N);
    printf("%d",sum(N));
}


int sum(int N){
    int sum=0;
    int i;
    for ( i=1; i <= N; i++){
    sum = sum+i;    
    }
    return sum;
}

