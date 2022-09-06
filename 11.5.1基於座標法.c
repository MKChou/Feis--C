#include <stdio.h>

int main(){
    int enter,enter2,i,j;

    printf("i= ");
    scanf("%d",&enter);
    printf("j= ");
    scanf("%d",&enter2);

    for( i=1; i<=enter; i++){
        for( j=1; j<=enter2; j++){
            printf("(%d,%d)",i,j);
        }
         printf("\n");
    }
    return 0;
}