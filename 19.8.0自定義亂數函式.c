#include <stdio.h>


static unsigned int next =1;

int rand(void){
    next = next*1103515245+12345;
    return (unsigned int)(next/65536)%32768;
}

int main(){
    for ( int i =1; i<5; i++){
        printf("%d\n",rand());  
    }

    return 0;
}