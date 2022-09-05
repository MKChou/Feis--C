#include <stdio.h>

    //a+b=30 a*b=221

int main(){
    int i,j;
    
    for( i=1; i<=221; i++){
        for( j=1; j<=30; j++){
            //printf("%d %d\n",i,j);

            if (i+j==30 && i*j==221 && i<j){
                printf("%d %d\n",i,j);
            }
        }
    }
     

}
