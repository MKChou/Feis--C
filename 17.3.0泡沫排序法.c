#include <stdio.h>


int main(){
    int i,j,number[5]={0};

    for ( j=0; j<5; j++){
        printf("Enter a number:");
        scanf("%d",&number[j]);
    }
    


    for ( j=0; j<4; j++){
        for( i=0; i<4-j; i++){
            if( number[i] > number[i+1] ){
                int t =number[i];
                number[i] = number[i+i];
                number[i+1]=t;
            }
        }
    }

    for (j=0; j<5; j++){
        printf("%d ",number[j]);
    }
    
    return 0;
}