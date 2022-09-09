#include <stdio.h>


int count(void){
    static int k=0;   
    k++;                      
    return k;
}


int main() {
    for ( int i=1; i<=5; i++){
        printf("%d\n",count());       
    }
    return 0;
}