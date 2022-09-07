#include <stdio.h>


int a,b,c,d;

int main(){
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    printf("Enter a number:");
    scanf("%d",&c);
    double d = (a+b+c)/3.; //隱性轉型
    // or double d = (a+b+c)/3f; //隱性轉型
    // or double d = (a+b+c)/(double)3; //顯性轉型
    printf("average:%f",d);

    return 0;
}