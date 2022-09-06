#include <stdio.h>

int maximum2(int, int);
int maximum3(int, int, int);

int main(){
    int a,b,c,max;

    printf("a: ");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);

    printf("Maximum:%d",maximum3(a,b,c));
}

int maximum2(int a,int b){
    if (b>=a){
        return b;
    } else {
        return a;
    }
}

int maximum3(int a, int b,int c){
    return maximum2(maximum2(a,b),c);
    
}