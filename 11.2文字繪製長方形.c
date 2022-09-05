#include <stdio.h>

int main(){
    int enter,i,j,count;

    printf("Please enter a number: ");
    scanf("%d",&enter);

    for( count=1; count<=enter; count++){
        for( i=1; i<=enter; i++){
            printf("*");
        }
        printf("\n");
    } 
}