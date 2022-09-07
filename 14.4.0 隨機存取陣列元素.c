#include <stdio.h>

int main(){
    int cost, enter;
    int price[5] = {23,56,12,43,16};
    cost = 0;
    
    printf("Enter:");
    scanf("%d",&enter);

    while( enter != 0 ){
        cost = cost + price[enter-1];
        printf("Enter:");
        scanf("%d", &enter);
    }
    printf("Total: %d", cost);

    return 0;
} 
