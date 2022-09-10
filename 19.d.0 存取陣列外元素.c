#include <stdio.h>


int main(){
    int v[3]={1,2,3};

    printf("%d\n",v[0]);
    printf("%d\n",v[1]);
    printf("%d\n",v[2]);
    printf("%d\n",v[3/2]);   // v[1]

    // printf("%d",0.5);     // (X)編譯錯誤
    //printf("%d",3/2.");    // (X)編譯錯誤 
    
    printf("%d",v[3]);       // (X)未定義行為

    return 0;
}