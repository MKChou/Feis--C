#include <stdio.h>


int max5([5]);

int main(){
    int a[5] = {3,8,7,4,1};
    printf("Max: %d",max5(a)); 
    return 0;
}


int max5(int v[5]){
    int max = v[0], i;
    for ( i=0; i<5; i++){
        if ( v[i] > max ){
            max = v[i];
        }
    }
    return max;
}