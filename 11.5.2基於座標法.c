#include <stdio.h>

int main(){
    int enter,enter2,i,j,swi;

    printf("Swich= ");
    scanf("%d",&swi);
    printf("i= ");
    scanf("%d",&enter);
    printf("j= ");
    scanf("%d",&enter2);

    switch (swi)
    {
        case 1:
            for( i=1; i<=enter; i++){
                for( j=1; j<=enter2; j++){
                    if(i==j){
                        printf("  *  ",i,j);
                    } else{
                        printf("(%d,%d)",i,j);
                    }   
                }
                printf("\n");

        case 2:
            for( i=1; i<=enter; i++){
                for( j=1; j<=enter2; j++){
                    if(i>j){
                        printf("  *  ",i,j);
                    } else{
                        printf("(%d,%d)",i,j);
                    }   
                }
            printf("\n");
        case 3:
            for( i=1; i<=enter; i++){
                for( j=1; j<=enter2; j++){
                    if(i<j){
                        printf("  *  ",i,j);
                    } else{
                        printf("(%d,%d)",i,j);
                    }   
                }
                printf("\n");
            
            } 
            return 0;
            }       
        }
    }
}