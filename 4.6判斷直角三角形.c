#include <stdio.h>

int main(){
    int a,b,c;
    printf("Please enter lengths:");
    scanf("%d%d%d",&a,&b,&c);
    a = a*a;
    b = b*b;
    c = c*c;
   if (a+b==c || b+c==a || a+c==b){
        printf("rectangular triangle!");
    }

}