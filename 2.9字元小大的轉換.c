#include <stdio.h>

int main(){
    char num;                                  //小寫變大寫
    char ans;
    printf("Please enter a number:");
    scanf("%c",&num);
    ans = num-32;
    printf("Ans:%c",ans);
    return 0;
}