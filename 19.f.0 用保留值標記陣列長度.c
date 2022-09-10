#include <stdio.h>


int length(int[]);
int maxv(int[]);

int main(){
    int v[5] = {1,99,3,4,-1};                   //保留值 == -1
    printf("Length: %d\n",length(v));
    printf("Max: %d\n",maxv(v));
    int b[6] = {7,2,8,4,1,-1};
    printf("Max: %d\n",maxv(b));
    return 0;
}


int length(int v[]){
    int i=0;
    while (v[i] != -1 ){
        i++;
    }
    return i+1;
}

int maxv(int v[]){
    int max=v[0], i=1;
    while ( v[i] != -1){
        if( v[i] > max ){
            max = v[i];
        }
        i++;
    }
    return max;
}