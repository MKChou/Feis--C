#include <stdio.h>

int div2(double); 

int main(){
    int enter;
    printf("Enter a number: ");
    scanf("%d",&enter);

    printf("Half: %d",div2(enter));
    return 0;
}


int div2( double x ){
    return x/2;
}