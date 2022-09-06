#include <stdio.h>

f(int);

int main() {

f(1);

}

int f(int i){
    if (i>=4){
     return i;
    }
    printf("%d\n",i);
    return f(i+1);

}