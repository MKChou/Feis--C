#include <stdio.h>

int main(){
    int guess;
    int number = 8;
    int count = 1;

    printf("Guess a number(1~9):");
    scanf("%d",&guess);

    while(guess!=number){
        if(guess>number){
            printf("Too large!\n");
        }
        else{
            printf("Too small!\n");
        }
        printf("Guess a number(1~9):");
        scanf("%d",&guess);

        count = count+1;
    }

    printf("Bingo!(%d)",count);
}