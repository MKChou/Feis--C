#include <stdio.h>

int main(){
    int number;
    int enter;
    int a;

    printf("Please enter a number:");
    scanf("%d",&enter);
    printf("Enter:%d\n",enter);

    for( number=1; number<=enter; number++ ){
        if(enter%number == 0){
            printf("%d ",number);
        }
    }

    return 0;
}