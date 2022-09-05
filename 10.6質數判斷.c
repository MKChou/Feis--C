#include <stdio.h>

int main(){
    int number;
    int enter;

    printf("Please enter a number: ");
    scanf("%d",&enter);

    for( number=1; number<=enter; number++){
        if ( enter%number==0 ){
            printf("不是質數！");
            break;
        } else{
            printf("是質數！");
            break;
        }
    }
    return 0;
}