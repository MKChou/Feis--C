#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0));
    int i;
    for (i = 1; i <= 5; i++){
        int dice;
        do{
            dice = rand()%7;            //除以7比較快，不然數字太大要猜很久才在範圍內。
        } while (dice<1 || dice>6);
        printf("%d\n", dice);
    }
    return 0;
}