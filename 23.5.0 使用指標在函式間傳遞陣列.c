#include <stdio.h>


int maxv(int, int, int);

int main(){
    int x,y,z;

    printf("Enter: ");
    scanf("%d",&x);
    printf("Enter: ");
    scanf("%d",&y);
    printf("Enter: ");
    scanf("%d",&z);
    printf("%d %d %d\n",x,y,z);
    printf("Max: %d\n",maxv(x,y,z));
}

int maxv (int a, int b, int c){
        int max = a;
        if(b >= max){
            max = b;
        }
        if(c >= b){
            max = c;
        }
        return max;
}