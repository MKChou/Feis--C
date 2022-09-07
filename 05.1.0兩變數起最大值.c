#include <stdio.h>

int main(){
    int a,b,max;
    printf("Please enter first number:");
    scanf("%d",&a);
    printf("Please enter second number:");
    scanf("%d",&b);
    max = a;

    if (b>a){
        max = b;
    }

    printf("max=%d",max);
}