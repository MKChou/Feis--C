#include <stdio.h>

int main(){
    int interger1;
    int interger2;

    printf("Enter first number:");
    scanf("%d",&interger1);
    printf("Enter second number:");
    scanf("%d",&interger2);
                                        // if a=3 b=5
    interger1 = interger1+interger2;    // 3+5=8            
    interger2 = interger1-interger2;    // b=8-5=3
    interger1 = interger1-interger2;    // a=8-3=5
    

    printf("interger1 is %d. \n",interger1);
    printf("interger2 is %d.",interger2);

}
