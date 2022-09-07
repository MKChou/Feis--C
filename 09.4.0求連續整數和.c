#include <stdio.h>

int main(){
    int count,number,enter;
    number = 0;
    printf("Please enter a number:");
    scanf("%d",&enter);
    for( count=1; count<=enter; count=count+1){
        number = number+count;
        
    }
printf("Sum=%d",number);
return 0;
}