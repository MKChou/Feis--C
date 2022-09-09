#include <stdio.h>
#include <limits.h>


int main(){

    unsigned int a = 1000;
    unsigned int b = a*a*a;
    unsigned int c = a*a*a*a;

    printf("%u\n", b);                                  //無號整數的溢位不是《未定義行為》
    printf("%u\n", c);                                  // 1000000000000 % (UNIT_MAX+1)
    printf("%u\n", UINT_MAX);                           //「(UNIT_MAX+1)」:  餘數 = 0~UNIT_MAX

    return 0;
}