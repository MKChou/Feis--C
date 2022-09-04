#include <stdio.h>

int main(){
    int guess,ans;

    printf("Guess a number(1~10):");
    scanf("%d",&guess);
    ans = 3;

    if (guess>ans){
        printf("Too large!");
    }
    else{
        if(guess==ans){
        printf("Bingo!");
        }
        if(guess<ans){
            printf("Too small!");
        }
    }
    return 0;
}