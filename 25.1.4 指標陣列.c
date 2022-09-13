#include <stdio.h>

int main(){
    int a[2] = {1,2};
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
    p[2][0] = 7;      //c[0][0]=7;
    }
}
