#include <stdio.h>

int maxv(int[],int N);

int main(){
    int b[4] = {1,2,3,-1};               // b[0]=1、b[1]=2、b[3]=3、b[4]=-1
    printf("Max:%d",maxv(b,4));
    return 0;
}

int maxv(int v[],int N){                 // maxv(「int」 v[],int N) >>>   int   >>> 宣告函式內的屬性(int)及長度(sizeof(int))
    int max=v[0], i=1;                   // maxv(int 「v」[],int N) >>>    v    >>> 函式參數使用陣列型態，讀取時非陣列而是記憶體位置(指標)        
    for ( i=0; i<N; i++){                // maxv(int v[],「int N」) >>>  int N  >>> 陣列的長度
        if ( v[i] > max ){
            max = v[i];
        }
    }
    return max;
}