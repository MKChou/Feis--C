#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b); 

    if (a>b)
    {
        printf("a>b");
    }
    else{
        if (a<b){
            printf("a<b");
        }
        if (a==b){
            printf("a=b");    
        }
    }

    return 0;
}