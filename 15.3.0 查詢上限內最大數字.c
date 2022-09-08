#include <stdio.h>

int i, q;
int max= -1;
int number[10] = {0};


/// @brief 
/// @return 
int main(){
    for ( i=1; i<=10; i++){
        printf("%d: ",i);
        scanf("%d",&number[i-1]);
    }

    printf("Q: ");
    scanf("%d",&q);

    for (i=0; i<=10; i++){
        if(q>number[i] && number[i]>=max){
            max = number[i];
        }
    }
    if( max != -1){
        printf("Max: %d",max);
    } else{
        printf("Error 404");
    }
    

    return 0;
}