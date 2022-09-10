#include <stdio.h>

int str_len(char[]);

int main(){
    char str[] = "Hello world";            // 自己後面會自動加上'\0'的字原來表示結尾
    printf("Length: %zu\n",sizeof(str));   // 所以長度應該是 11+1 = 12
    printf("Str_Length: %d\n",str_len(str));
    return 0;
}

int str_len( char str[]){
    int i=0;
    while ( str[i]!= '\0'){
        i++;
    }
    return i;
}