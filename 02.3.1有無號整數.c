#include <stdio.h>


int a = 123456789; //int是有號數
unsigned int b = 30000000000; //unsigned int是無號數

int main(){
    printf("%d\n",a);
    printf("%d\n",b);  //無號數用有號數列印會出問題
    printf("%u\n",b);

    return 0;
}