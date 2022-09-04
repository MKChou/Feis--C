#include <stdio.h>

int main(){
    int number ;
    int count = 1;
    
    printf("Enter a number:");
    scanf("%d",&number);
    while(count<=number){
        printf("number:%d\n",count);
        count = count+1;
    }
}