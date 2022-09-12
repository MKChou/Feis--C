/*strcpy 複製字串函式
  char * strcpy (char destination, const char * source);
  將source複製到destination*/

#include <stdio.h>
#include <string.h> 

int main(){
    const char * source = "test";
    char *destination/*[]*/;         //只有宣告一個位置存位置，沒有其他位置存字元

    strcpy(destination, source);
    printf("%s\n",destination);
    return 0;
}