#include <stdio.h>


int max3([3]);

int main(){
    int a[3] = {3,9,7};
    printf("Max: %d",max3(a)); 
    return 0;
}


int max3(int v[3]){
    int max = v[0], i;
    for ( i=0; i<3; i++){
        if ( v[i] > max ){
            max = v[i];
        }
    }
    return max;
}