#include <stdio.h>

int main(){
    int a,b,c;
    printf("Please enter 2 number:");
    scanf("%d %d",&a,&b);
    printf("before: %d %d\n",a,b);
    if(a<b){
        c = a;
        a = b;
        b = c;
    }
    printf("after: %d %d",a,b);
}