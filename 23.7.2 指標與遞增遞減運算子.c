#include <stdio.h>

int main(){
    int v[5]={1,2,3,4,5};
    int *p = v;
    int i;


    for ( i=0; i<5; i++){
        printf("%d ",v[i]);
    }
    printf("\n");


    while( p != v+5){
        *p = 0;
        p++;
    }
    
     for ( i=0; i<5; i++){
        printf("%d ",v[i]);
    }

    return ;
}