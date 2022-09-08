#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i,j,k=0;
    int v[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for ( i=0; i<3; i++){
        for ( j=0; j<3; j++){
            int r,a,b,t;
            r = rand()%(9-k)+k;        //k++ >> 產生隨機 0~8的餘數     
            a = r/3;
            b = r%3;
            t = v[i][j];
            v[i][j] = v[a][b];
            v[a][b] = t;
            k++;
        }
    }

    for ( i=0; i<3; i++){
        for( j=0; j<3; j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }

    return 0;
}