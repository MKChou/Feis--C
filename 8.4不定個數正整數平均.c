#include <stdio.h>

int main(){
    int number,sum,average;
    int count = 1;

    printf("Please enter a number:");
    scanf("%d",&number);
    
    while(number!=0){
        sum = sum+number;
        count = count+1;
        printf("Please enter a number:");
        scanf("%d",&number);
    }
    average = (float)sum/count;
    printf("Total:%d\n",sum);
    printf("Average:%d",average);
}