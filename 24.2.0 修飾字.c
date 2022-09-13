#include <stdio.h>

int main(){
    int a = 3; // (O) 給值>>>初始化
    const int b = 3; // (O) 初始化成3，但值在初始化之後不能再改變，只能唯讀。
    const int v[3] = {1,2,3}; // (O) 陣列也可以加入const
}