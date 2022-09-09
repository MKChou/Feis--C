#include <stdio.h>


int main(){
    unsigned int next= 1;

    for(int i=0; i<5; i++ ){
    next = next*1103515245 +12345;
    int rand = (unsigned int)(next/65536)%32768;
    printf("%d\n",rand);
    }

    return 0;
}
