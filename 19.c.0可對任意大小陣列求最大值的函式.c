#include <stdio.h>


int max3(int,int,int);

int main(){
    printf("Max: %d",max3(3,9,7)); 
    return 0;
}


int max3(int a,int b,int c){
    int max = a;
    if( b > max ){
        max = b;
    }
    if ( c > max ){
        max = c;
    }
    return max;
}