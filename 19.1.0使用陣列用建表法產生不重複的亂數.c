#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,n,counter[10]={0};

    srand(time(0));
    
    for ( i=1; i<=10; i++){
        do{
            n = rand()%10+1;             //reset a number (1~10)
        }  while(counter[n-1] >= 1);        // if counter[n] 大於等於1就不做 > 不printf > 再擲一次骰子
 
        printf("%d ",n);
        counter[n-1]++;              // 出現i 把i 放進 counter[i]然後加1
    }


    printf("\n");
    return 0;
}