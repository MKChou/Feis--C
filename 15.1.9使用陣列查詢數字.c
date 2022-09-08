#include <stdio.h>

int i,enter;
int number[5] = {0};

int main() {


    for ( i=1; i<=5; i++){
        printf("Enter:");
        scanf("%d",&number[i-1]);
    }
    while(1){
        printf("Q: ");
        scanf("%d",&enter);
        if( enter == 0){
            printf("End!");
            break;
        } else{
            printf("Ans:%d\n",number[enter-1]);
        }
    }

    return 0;
}
