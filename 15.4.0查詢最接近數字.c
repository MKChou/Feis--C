#include <stdio.h>
#include <stdlib.h>

int main(){
    int enter,i,Q,nearest_N;
    int number[10]={0};

    for ( i=0; i<10; i++){
        printf("Number%d: ",i);
        scanf("%d", &number[i]);
    }

    printf("Q:");
    scanf("%d",&Q);

    for ( i=0; i<=10; i++){
        if (abs(Q-number[i]) < abs(Q-nearest_N) ||
        abs(Q-number[i]) == abs(Q-nearest_N)&&
        number[i]<nearest_N){           
            nearest_N = number[i];                  
        }                                         
    }

    printf("Nearest:%d",nearest_N);




    /*for(i=0; i<10; i++){                          //Q-number[i] 新的差值
        printf("%d\n",number[i]);                     //Q-nearst_N  舊的差值
    }*/                                         //  if 新差值小於舊差值，number[i]＝nearst_N，就差值的nearst_N就變成number[i]來跟下一個比。
}





