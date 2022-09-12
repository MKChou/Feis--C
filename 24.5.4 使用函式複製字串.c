/*strcpy 複製字串函式
  char * strcpy (char destination, const char * source);
  將source複製到destination*/

#include <stdio.h>
#include <string.h> 

int main(){
    const char source[5] = "test";
    char *destination[5];         //產生一個字元陣列可讀可寫

    strcpy(destination, source); //把source[5]字元陣列轉成字元指標放進 destination字元陣列變成的的字元指標
    printf("%s\n",destination); 
    return 0;
}