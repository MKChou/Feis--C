#include <stdio.h>

int main(){
    char source[5] = "test";
    char destination;

    //淺複製(shallow copy) [同一份]
    destination = source ; //(X)編譯失敗 字元陣列不能放進字元陣列裡面

    printf("%s\n",destination);
    return 0;
}