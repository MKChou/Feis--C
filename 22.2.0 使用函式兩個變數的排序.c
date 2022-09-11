#include <stdio.h>

int main(){
    int a=4,b=3;
    int t;
    if(a>b){
        t = a;
        a = b;
        b = t;
    }

    printf("%d %d",a,b);

}