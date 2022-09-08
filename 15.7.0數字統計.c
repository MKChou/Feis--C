#include <stdio.h>


int main(){
    int number[10];
    int i,n,max;
    int sum = 0;
    int avg = 0;

    for( i=0; i<10; i++){
        printf("Enter a number:");
        scanf("%d",&n);
        if ( i==1 || n>max){           // i=1 >> 第一輪無條件把 max = n
            max=n;
        }
        sum = sum +n;
    }

    avg = sum/10;



    printf("Maximum: %d\n",max);
    printf("Avervage: %d\n",avg);

    /*for( j=0; j<3; j++){
        printf("%d\n",number[j]);
       
    }*/
}