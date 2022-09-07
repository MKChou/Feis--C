#include <stdio.h>

int main(){
    int max;
    int number;
    int answer=0;

    printf("Enter:");
    scanf("%d",&max);

    for ( number=max; number>=0 && answer==0; number--){
        if(number%3==2 && number%5==3 && number%7==2){
            break;
        }
    }

    printf("Max:%d",number);
    
    return 0;
}