#include <stdio.h>

int main(){
    int ans = 4;
    int guess;
    printf("Guess a number(1~10):");
    scanf("%d",&guess);
    if (ans==guess){
        printf("You are Right!");
        }
    if (ans>guess){
        printf("Too large!");
    }
    if (ans<guess){
        printf("Too small!");
    }

    return 0;
}