#include <stdio.h>

int main(){
    int count;

    for( count=1; count<=10; count = count+1){
        if( count%2 == 1){
            printf("number:%d\n",count);
        }
    }
return 0;
}