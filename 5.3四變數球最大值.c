#include <stdio.h>

int main(){
    int a,b,c,d,max;
    printf("Please Enter 4 number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max = a;
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }
    if (d>max){
        max = d;
    }
    printf("max:%d",max);
}