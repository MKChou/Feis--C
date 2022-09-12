#include <stdio.h>

int main(){
    int v[5]={};
    int *n = v;   // &v[0]  == n
    n[0] = 0;     // a[b] == 就是 *(a+b), n[0]就是 *(n+0) 
}