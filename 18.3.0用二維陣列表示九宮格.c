#include <stdio.h>

int main(){

    int v[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int i,j,k=1;
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            v[i][j] = k;
            k++;
        }
    }

    printf("k: %d\n",k);

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }


    return 0;
}