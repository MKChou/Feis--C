#include <stdio.h>

int main(){
    int number;
    printf("Enter:");  
    if (scanf("%d",&number) == 1){                //sacnf的回傳值時成功讀取了幾個資料
        printf("%d",number);
    } else {
        printf("Error: Ivalid input\n");
    }    
    
    
}