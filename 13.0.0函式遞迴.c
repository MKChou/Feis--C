#include <stdio.h>

int f(int);

int main() {
    printf("%d",f(0));
    return 0;
}

int f(int i){
    if ( i==2 ){
        return i;
    }
    return f(i+1);
}


// https://www.youtube.com/watch?v=BWrfNs7k5CY&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=105