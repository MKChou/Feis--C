#include <stdio.h>

void countTo3(int);

int main(){
    countTo3(3);
    return 0;
}

void countTo3(int i){
    if( i>=1 ){
        printf("%d\n",i);
        countTo3(i-1);
    }
}