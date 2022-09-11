#include <stdio.h>


void sort(int*, int*);
void swap(int*, int*);


int main(){
    int a=3,b=5;
   //printf("Enter 2 number: ");
    //scanf("%d%d",&a,&b);
    int t;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}


void sort(int *a, int *b){
    if(*a > *b){
        swap(a,b);              // swap的函式輸入是swap((int *)x, (int *)y)  >>> 原本的a、b是數值要取址
    }
}

void swap(int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t;
}