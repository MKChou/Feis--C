#include <stdio.h>

int main(){
    int a[4] = {1,2,3,4};
    int b[2] = {3,4};
    int c[2] = {5,6};            /*  p[0] = &a[0] (int*)
                                     p[1] = &b[0] (int*)
                                     p[2] = &c[0] (int*)  */
                                    
                                                                        

    int *p[3] = {a, b, c};

    //循序存取
    int i,j;
    for ( i=0; i<3; i++){
        for (j=0; j<3; j++){
            *p[i] = 0;
        }
        
    //隨機存取
    p[0][2] = 9;       //a[2]=9;
    p[1][2] = 7;       //>>>超出陣列範圍以外的元素，未定義行為（沒有b[3])
    }
}
