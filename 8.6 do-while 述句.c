// do{程式片段} while (表示式);

#include <stdio.h>

int main(){
    int count = 1;
    do{
        printf("number:%d\n",count);
        count = count + 1;
    } while (count <= 10);

    return 0 ; 
}