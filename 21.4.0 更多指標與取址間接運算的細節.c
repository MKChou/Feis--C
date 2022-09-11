#include <stdio.h>

int main(){
    int count = 9;
    int *countAddress = &count;
    int result = *&count;

    return 0;
}

/*
            *&count = count ;
            >>> *&可以互相抵銷。  >>> *&*&*&*&count =count;