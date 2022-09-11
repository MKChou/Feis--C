#include <stdio.h>

int main(){
    int v[5] = {5,6,7,8,9};
    int *n = v; 
    int i;

    for ( i=0; i<5; i++){
        printf("%d ",*(n+i));
    }
    
    return 0;
}