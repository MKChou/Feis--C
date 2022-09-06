#include <stdio.h>

int max2(int,int);


int main(){
    int a,b,max;

    printf("Please enter first number: ");
    scanf("%d",&a);
    printf("Please enter second numberl: ");
    scanf("%d",&b);

    max=max2(a,b);
    printf("Max:%d",max);

    return 0;
}

int max2(int a,int b){
    int max;

    if (a>=b){
        max = a;
    } else{
        max=b;
    }
    return(max);
}