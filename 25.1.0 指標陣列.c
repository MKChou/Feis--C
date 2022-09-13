#include <stdio.h>

int main(){
    int v[3] = {1,2,3}; //陣列
    int *p[3] = {&v[0],&v[1],&v[2]};   //指標陣列

    //循序存取
    int i;
    for ( i=0; i<3; i++){
        *p[i] = 0;

    //隨機存取
    *p[2] = 5;
    }
}
