#include <stdio.h>

int main(){
    int enter,i,count,count2;

    printf("Enter a number: ");
    scanf("%d",&enter);
    
    printf("*\n");

    for ( count=1; count<=enter-2; count++){
        printf("*");
        for( count2=1; count2<=count-1; count2++){
        printf(" ");
        }
         printf("*");
        printf("\n");
    }

    for(i=1;i<=enter; i++){
        printf("*");
    }

    return 0;
}
