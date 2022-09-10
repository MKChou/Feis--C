#include <stdio.h>

void str_print(char str[], int N){
    int i;
    for (i=0;i<6;i++){
        printf("%c",str[i]);
    }
    
}

int main(){
    char str[] = {'H','e','l','l','o','!'};

    str_print(str,6);
    return 0;
}