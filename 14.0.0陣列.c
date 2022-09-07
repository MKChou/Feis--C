#include <stdio.h>


int main() {
    int v[3];
    int v[0]=0;
    int v[1]=1;
    int v[2]=2;
    int max;

    max = v[1];

    if (v[2]>v[1]){
        max = v[2];
    }
    if (v[3]>v[1]){
        max = v[3];
    }

    printf("Max:%d",max);

    return 0;
    
}