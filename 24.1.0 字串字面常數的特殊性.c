#include <stdio.h>

int main(){
    char strA[] = "test";   //寫入 star[0]、star[1]、star[2]、star[3]、'\0' >>>宣告5個空間去存取
    char *strB = "test"; //字串字面常數可以隱性轉型成字元指標   >>> 只能讀不能寫 >>> 宣告一個記憶體空間去存位置

    star[0] = 'T';  //(O)
    strB[0] = 'T';  //(X) 未定義行為

    strA  = "Test"; //(X) 編譯行為 >>>because 陣列是無法直接被賦值的
    strB  = "Test"; //(O) 額外產生記憶體空間去儲存(只能讀不能改)

}