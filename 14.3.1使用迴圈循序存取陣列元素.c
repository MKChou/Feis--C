#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int number[6]={0};
    srand(time(0));

    int i,j;

    for( i=1; i<6000; i++){
        int dice = rand()%6+1;
        for (j=1; j<=6; j++){
            if( dice == j ){
                number[j-1]++;
            }
        }
    }

    for (j=1; j<=6; j++){
        printf("%d: %d\n",j,number[j-1]);
    }

    return 0;
}