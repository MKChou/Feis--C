#include <stdio.h>

int main(){
    int a,b;
    char op;
    float ans;

    printf("Please enter:");
    scanf("%d%c%d",&a,&op,&b);

    if (op=='+'){
        ans=a+b;
    }else if (op=='-'){
        ans=a-b;
    }else if (op=='*'){
        ans=a*b;
    }else{
        ans=(float)a/b;
    }
    
    printf("Ans: %f \n",ans);

    return 0;
}