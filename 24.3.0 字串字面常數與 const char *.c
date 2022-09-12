#include <stdio.h>

int main(){
    char strA[] = "test";
    const char* strB = "test";

    strA[0] = 'A'; // (O) 可以初始化賦值
    //strB[0] = 0; // (X) 編譯失敗 。已經const int 所以無法賦值      p.s若沒const 也是未定義行為

}