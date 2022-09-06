#include <stdio.h>

int maximum(int,int, int);

int main(){
    int a,b,c;

    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    printf("Maximum: %d",maximum(a,b,c));

    return 0;
}


int maximum(int a,int b, int c){
    int max = a;

    if (b>max){
        max = b;
    }

    if(c>max){
        max = c;
    }

    return max;
}