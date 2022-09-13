#include <stdio.h>

int main(){
    int v[3] = {1,2,3}; //陣列 
    int *n = v;

    //循序存取
    int i;
    for ( i=0; i<3; i++){
        n[i] = 0;

    //隨機存取
    n[2] = 5;
    }
}
