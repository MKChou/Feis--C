#include <stdio.h>

void arrayMax(int);

int main(){
    arrayMax(3);
    return 0;
}

void arrayMax(int i){
    if( i>=1 ){
        printf("%d\n",i);
        countTo3(i-1);
    }
}