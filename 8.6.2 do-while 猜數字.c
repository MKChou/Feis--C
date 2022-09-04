#include <stdio.h>

int main(){
    int guess,number;
    number = 13;

    printf("Please enter your guess(1~20):");
    scanf("%d",&guess);

    do{
        if(guess>number){
            printf("Too large!\n");
        }
        else{
            printf("Too small!\n");
        }
        printf("Please enter your guess(1~20):\n");
        scanf("%d",&guess);
    } while(number!=guess);

    printf("Bingo!!!");



}
   
