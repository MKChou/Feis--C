#include <stdio.h>

int main(){
    char strA[] = "test";
    char *strB = "test";   //唯獨，語法尚未禁止，可以編譯但是是未定義行為。
    const char *strC = "test";  //唯獨

    strA[0] = 'T';  //(O)
    strB[0] = 'T';  //(X) 未定義行為
    strC[0] = 'T';  //(X) 編譯失敗

    strA = strB;    //(X)  char[] != char *
    strA = strC;    //(X)  char[] != const char*