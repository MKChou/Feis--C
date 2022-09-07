#include <stdio.h>

int main(){
    int a,guess;
    printf("Guess a number(1~10):");
    scanf("%d",&a);
    
    guess = 3;
    if (a>guess){
        printf("Too large!");
    }else if(a==guess){
        printf("Bingo!");
    }else{
        printf("Too small!");
    }
    
    return 0;
}