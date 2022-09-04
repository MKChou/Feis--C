#include <stdio.h> 

// 大 中 小
int main(){
    int a,b,c,t;
    printf("Please Enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);

    if((c>a)){
        t=a;
        a=c;
        c=t;
    }
    if(b>a){
        t=b;
        b=a;
        a=t;
    }
    if(c>b){
        t=c;
        c=b;
        b=t;
     }
    printf("%d %d %d",a,b,c);
}