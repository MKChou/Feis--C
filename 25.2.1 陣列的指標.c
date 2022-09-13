#include <stdio.h>

void print(int (*q)[3]){
    int i;
    for ( i=0; i<3; i++){
        printf("%d ",(*q)[i]);
    }
    printf("\n");
}

int main(){
    int v[3] = {1,2,3};
    printf(&v);
    return 0;
}