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
    strB = strA;    //(O)  char *  = char[]  >>>把一個字元陣列放進字元指標裡面
    strB = strC;    //(X)  char * != const char* >>不能把一個不能修改的位置const放進可修改的位置 
    strC = strA;    //(O)  const char* = char[] >>>把一個字元陣列隱性轉型成字元指標放進不可修改的指標中。
    strC = strB;    //(O)  const char* = char*  >>> 把字元指標放進不可修改的字元指標中