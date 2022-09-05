#include <stdio.h>

int main(){
    int count;

    for( count=1; count<=10; count++ ){
        if(count == 5){
            break;
        }
    printf("Number:%d\n",count);
    }
    return 0;
}