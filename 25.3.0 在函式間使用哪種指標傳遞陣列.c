#include <stdio.h>

int main{
    int v[3] = {1,2,3};                      // 整數陣列
    int *n = v;                              // 整數陣列隱性轉型成一個指標，存的是第一個人的位置 &v[0](int *型態)。
    int *p[3] = { &v[2], &v[1], &v[0]};    /* 指標陣列 p[0] = &v[2] (int *)
                                                        p[1] = &v[1] (int *)
                                                        p[2] = &v[0] (int *) */
    int (*q)[3] = &v     // 括弧內*先做 >>> 指標      >>> 存一個三個元素的整數陣列



}