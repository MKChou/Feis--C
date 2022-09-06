#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));                    //只需要呼叫一次
    int i;
    for ( i=1; i<=3; i++){
        printf("%d\n",rand());
        
    }
    
}