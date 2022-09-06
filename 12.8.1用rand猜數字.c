#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int enter;

    printf("Guess a number(1~6): ");
    scanf("%d",&enter);

    int answer;
    answer = rand()%6+1;

    if ( enter > answer){
        printf("Too large!");
    } else if (enter < answer){
        printf("Too small");
    } else{
        printf("Bingo");
    }
    return 0;
}