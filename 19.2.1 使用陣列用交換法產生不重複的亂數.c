#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j, n[10]={0};

    for ( i=0; i<10; i++){                    //先產生不重複數列 1到10
        n[i] = i+1 ;
    }

    for(j=0;j<10;j++){printf("%d ",n[j]);} printf("\n");

    for ( i=0; i<10; i++){                                        
            int j = rand()%10 + 1;           // 產生 n[i]與n[j]交換，換完就下一個階段i換 
            // 交換 n[i]、n「j」               // n[0]跟 n[1]～[9]換
            int t = n[i];                  //  n[1]跟 n[2]~n[9]換 直到 n[8]跟n[9換]
            n[i] = n[j-1];                 // j why-1 >>> n[i]是0~9，但 n[j]是1~10 >>> 要減1
            n[j-1] = t;
    }

    for(j=0;j<10;j++){printf("%d ",n[j]);} printf("\n");

    return 0;

    }
