#include <stdio.h>

int main(){
    int a=1, b=2, c=3;
    int *p[3] = {&a, &b, &c};

    //循序存取
    int i;
    for ( i=0; i<3; i++){
        *p[i] = 0;

    //隨機存取
    *p[2] = 5;
    }
}
