#include <stdio.h>

int main(){
    int people;
    int cost;
    printf("Number of customers:");
    scanf("%d",&people);
    cost = people*300;
    if (cost>=3000){
        cost = 0.8*cost;
    }
    printf("Pay:%d",cost);

    return 0;
}