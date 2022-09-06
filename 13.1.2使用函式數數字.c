#include <stdio.h>

void countTo3(int);

int main(){
    countTo3(1);
    return 0;
}

void countTo3(int i){
    if( i<=3 ){
        printf("%d\n",i);
        countTo3(i+1);
    }
}