#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j,n[10];

    srand(time(0));
    for ( i=0; i<10; i++){
        do{ 
            n[i] = rand()%10+1;            //reset a number of 1~10
            for ( j=0; j<i; j++){          // 比到i即可，i後面的數字還沒被宣告
                if (n[i] == n[j]){         //判斷是否有重複過
                    break;                 // when j=i  >> break;
                }
            }
        } while ( j != i);           
        printf("%d ",n[i]);
    }
    printf("\n");
    
    return 0;
}