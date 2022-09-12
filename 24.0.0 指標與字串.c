#include <stdio.h>

int main(){
    char strA[] = {'t','e','s','t','\0'};   //字串是以'\0'來表示結尾的字元陣列
    char strB[] = "test";                   //字元陣列可以用""字串進行初始化，會自動加上'\0'字元 

    printf(strA);                           //(O)隱性轉性成指標
    printf(strB);                           //(O)隱性轉性成指標

    printf("test");                         //(O)字串字面常數
    //printf('t','e','s','t','\0');         //(X)

    //char *strC = "test";                    //(?)字串字面常數
    //char *starD = {'t','e','s','t','\0'};   //(X)

    printf((char[]){'t','e','s','t','\0'}); // C99:複合字面常數
}