#include <stdio.h>

int main(){
    int a,b;
    char op;
    float ans;
    printf("Please enter:");
    scanf("%d%c%d",&a,&op,&b);

switch (op)
{
case '+':
    ans = a+b;
    break;
case '-':
    ans = a-b;
    break;
case '*':
    ans = a*b;
    break;
case '/':
    ans = (float)a/b;
    break;
default:
    printf("?????");
    break;
}

printf("Ans=%f",ans);
}