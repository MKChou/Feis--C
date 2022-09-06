#include <stdio.h>

int print_star(int);


int main(){
    int enter, i, j;

    printf("Enter a number:");
    scanf("%d",&enter);
    
    print_star(enter);
}

void print_star(int enter){        // void = 沒有回傳值的函式
    int i, j;

    for( i=1; i<=enter; i++){
        for( j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}