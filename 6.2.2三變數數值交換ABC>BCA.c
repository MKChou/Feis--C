#include <stdio.h>

int main(){
    int a,b,c,t;
    printf("ABC>BCA\n");
    printf("Enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("before:%d %d %d\n",a,b,c);
    t = a;
    a = b;
    b = c;
    c = t;
    printf("after:%d %d %d",a,b,c);
}