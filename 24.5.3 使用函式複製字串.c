/*strcpy 複製字串函式
  char * strcpy (char destination, const char * source);
  將source複製到destination*/

#include <stdio.h>
#include <string.h> 

int main(){
    const char * source = "test";
    char *destination[5];         //產生一個字元陣列可讀可寫

    strcpy(destination, source); //desination字元陣列隱性轉型成字元指標傳入destination
    printf("%s\n",destination); 
    return 0;
}