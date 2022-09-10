#include <stdio.h>

void str_print(char str[]){
    int i;
    for (i=0; str[i]; i++){
        printf("%c",str[i]);
    }
    
}

int main(){
    char str[] = {'H','e','l','l','o','!','\0'};   // '\0'表示結尾

    str_print(str);
    
    return 0;
}