#include <stdio.h>

int main(){
    int a,b,c,t;
    printf("ABC>CBA\n");
    printf("Enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("before:%d %d %d\n",a,b,c);
    t = a;
    a = c;
    c = b;
    b = t;
    printf("after:%d %d %d",a,b,c);

    return 0;
}