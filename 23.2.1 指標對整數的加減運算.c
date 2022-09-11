#include <stdio.h>

int main(){
    int v[5] = {};
    int *n =v;
    /*
    n   == &v[0];
    n+1 == &v[1];
    n+2 == &v[2];*/

    *(n+2) = 8;
    printf("%d",v[2]);
}