#include <stdio.h>

int main(){
    int v[3] = {1,2,3};
    return 0;
}

//v[i]的位置 = 第一個元素的起始位置+ i*sizeof(int)
// if v[0] == 20000          sizeof(int)=4
//    v[1] == 20004
//    v[2] == 20008