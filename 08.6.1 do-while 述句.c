// do{程式片段} while (表示式);

#include <stdio.h>

int main(){
    int count = 1;
    do{
        printf("number:%d\n",count);
        count = count + 1;
    } while (count <= 10);           //當框內條件達成時跳脫

    return 0 ; 
}