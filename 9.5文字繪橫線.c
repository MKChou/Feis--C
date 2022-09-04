#include <stdio.h>

int main(){
    int enter,count;

    printf("Stat:");
    scanf("%d",&enter);
    for( count = 1;count<=enter; count++ ){
        printf("*");
    }
return 0;
}