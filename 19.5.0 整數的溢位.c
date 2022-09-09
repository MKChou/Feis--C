#include <stdio.h>


int main(){

    int a = 1000;
    int b = a*a*a;
    int c = a*a*a*a;
    printf("%d\n",b);
    printf("%d\n",c);     //溢位 
    
    return 0;
}