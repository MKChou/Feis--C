#include <stdio.h>

int str_len(char[]);

int main(){
    char str[] = {'H','e','l','l','o',' ','w','o','r','l','d'};  //陣列初始值就算後面沒有'\0'，也會自動幫你補。

    printf("Length: %zu\n",sizeof(str));   
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