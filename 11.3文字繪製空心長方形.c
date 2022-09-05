#include <stdio.h>

int main(){
    int a,i,j,count,enter;

    printf("Please enter number: ");
    scanf("%d",&enter);

    for( i=1; i<=enter; i++){
        printf("*");
    }
    printf("\n");

    for( count=1; count<=enter-2; count++){

        printf("*");
        for( i=1; i<=enter-2; i++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    
    for( i=1; i<=enter; i++){
            printf("*");
    }
    
    return 0;
}