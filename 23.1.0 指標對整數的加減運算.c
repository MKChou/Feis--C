#include <stdio.h>

int main(){
    int v[5] = {0,1,2,3,4};

    printf("%d",v[0]+1);
    return 0;
}

/*                     可以透過陣列元素的位置加減一個整數來求得其他元素的位址                            
    &v[0]+1 == &v[1];  從v[0]位址往前移動一個陣列元素後的位址
    &v[1]+1 == &v[2];  從v[1]位址往前移動一個陣列元素後的位址
    &v[1]-1 == &v[0];  從v[0]位址往回移動一個陣列元素後的位址

   

    //v[0]+v[1]       // (X)編譯失敗
    //v[2]-v[1] == 1  // (O)編譯成功，代表v[2]位址到v[1]位址距離1個元素。
*/
