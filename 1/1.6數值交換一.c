#include <stdio.h>

int main(){
    int interger1;
    int interger2;
    int temp;

    printf("Enter first number:");
    scanf("%d",&interger1);
    printf("Enter second number:");
    scanf("%d",&interger2);

    temp = interger1;
    interger1 = interger2;
    interger2 = temp;

    printf("interger1 is %d. \n",interger1);
    printf("interger2 is %d.",interger2);

}
