#include <stdio.h>

void addone(int n){
    n = n+1;
}

int main(){
    int a = 3;
    addone(a);          //>>> 複製a的值給 addone
    printf("%d",a);     // a 還是 3 >>> 給void的值是複製品
    return 0;
}   