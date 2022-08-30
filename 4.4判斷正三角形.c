#include <stdio.h>

int main(){
    int a,b,c;
    printf("Please enter the lengths:");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && a==c){
        printf("Regular triangle");
    }
    return 0;
}