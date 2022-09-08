#include <stdio.h>


int main(){
    int i,j,n,b[10]={0};

    for ( i=0; i<10; i++){
        printf("Enter: ");
        scanf("%d",&n);
        b[(n)/10]++;
    }

    
    for ( i=0; i<10; i++){
        printf("%d0:",i);

        for ( j=0; j<b[i]; j++){
            printf("*");
        }

        printf("\n");

        return 0;
    }
}