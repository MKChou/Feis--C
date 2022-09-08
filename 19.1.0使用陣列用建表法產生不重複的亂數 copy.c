#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,n,counter[10]={0};

    srand(time(0));
    
    for ( i=0; i<10; i++){    
        do{
            n = rand()%10+1;             
        }  while(counter[n-1] != 0);    //     當counter不等於0時才會擲骰子，等於1時代表有數字，i進行下一次，直到i=10，代表已有10個數子產生。    

        printf("%d ",n); 
        counter[n-1]++;                 //!!!  一定要減一是因為 count[n-1] when 骰子擲到3, n=3時, 要放到 counter[2]
    }

    printf("\n");
    return 0;
}