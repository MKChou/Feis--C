#include <stdio.h>

void print(int *n){
    int i;
    for (i=0; i<3; i++){
        printf("%d",n[i]);
    }
    printf("\n");
}

int main(){
    int v[3] = {1,2,3};
    printf(v);
    return 0;
}