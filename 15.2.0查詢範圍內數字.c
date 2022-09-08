#include <stdio.h>

int main(){
    int L,R,i,Ans;
    int number[10];

    for ( i=1; i<=10; i++){
        printf("%d: ",i);
        scanf("%d",&number[i-1]);
    }

    printf("L: ");
    scanf("%d",&L);
    printf("R: ");
    scanf("%d",&R);
    printf("Ans: ");
    
    for ( i=0; i<10; i++){
        
        if (L<=number[i] && R>=number[i]){
            printf("%d ",number[i]);
        }
    }

    return 0;
}