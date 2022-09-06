#include <stdio.h>

sum(int);


int main(){
    int enter;

    printf("Enter a number:");
    scanf("%d",&enter);
    printf("sum: %d",sum(enter));
    return 0;
}

int sum(int enter){
    if(enter>=3){
        return sum(enter-1)+sum(enter-2);
    } else if (enter ==1 ){
        return 1;
    }else {
        return 2;
    }
}