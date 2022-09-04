#include <stdio.h>

int main(){
    int number,total;

    printf("Enter the number:");
    scanf("%d",&number);

    while(number!=0){
        switch (number)
        {
        case 1:
            total = total+90;
            break;
        case 2:
            total = total+75;
            break;
        case 3:
            total = total+83;
            break;
        case 4:
            total = total+89;
            break;
        case 5:
            total = total+71;
            break;
        
        default:
            printf("Not found!");
            break;
        }
    printf("Enter the number:");
    scanf("%d",&number);
    }
    printf("Total:%d",total);
    return 0;

}