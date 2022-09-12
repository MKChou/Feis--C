#include <stdio.h>

int main(){
    char source[5] = "test";
    char destination[5];

    //深複製(deep copy) 
    int i;
    for (i=0; i<5; i++){
        destination[i] = source[i]; 
    }

    printf("%s\n",destination);
    return 0;
}