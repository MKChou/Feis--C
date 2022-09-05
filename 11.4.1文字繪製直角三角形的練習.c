#include <stdio.h>

int main(){
    int enter,count,count2;
    
    printf("Please enter a number:");
    scanf("%d",&enter);

    for ( count=1; count<=enter; count++){
        for( count2=1; count2<=count; count2++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}