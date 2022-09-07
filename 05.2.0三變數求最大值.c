#include <stdio.h>

int main(){
    int a,b,c,max;
    printf("Please enter first number:");
    scanf("%d",&a);
    printf("Please enter second number:");
    scanf("%d",&b);
    printf("Please enter third number:");
    scanf("%d",&c);

    max = a;
    if (b>max){
        max = b; 
    }
    if (c>max){
        max = c;
    }
    printf("max = %d",max);
    return 0 ;
}