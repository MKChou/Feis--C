#include <stdio.h>

int main(){
    int a;
    printf("Please enter a number:");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("John");
            break;
        case 2:
            printf("Rock");
            break;
        case 3:
            printf("Qubi");
            break;
        case 4:
            printf("Cindy");
            break;
        default:
            printf("Not found");
    }
    
    return 0;
}