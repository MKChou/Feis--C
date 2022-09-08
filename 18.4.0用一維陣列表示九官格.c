#include <stdio.h>
 

int main(){
    int v[9] = {1,2,3,4,5,6,7,8,9};
    int i,k;

    for ( i=0; i<9; i++){
        if(i%3 == 0){
            printf("\n");
        }
        printf("%d ",v[i]);
    }

    printf("\n");

    for( i=0; i<9; i++){
        v[i] = k;
        k++;
    }
    printf("k: %d",k);

    return 0;


}