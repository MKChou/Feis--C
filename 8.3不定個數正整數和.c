#include <stdio.h>

int main(){
    int number;
    int total;
    
    printf("Please enter a number:");
    scanf("%d",&number);

    while(number != 0){
        total = total+number;
        printf("Please enter a number:");
        scanf("%d",&number);
    }
    printf("Total:%d",total);
}