#include <stdio.h>


int main(){

    int i,n,b[10]={0};

    for ( i=0; i<10; i++){
        printf("No.%d: ",i+1);
        scanf("%d",&n);
        b[n]++;
    } 

    int ans=0;
    for ( n=0; n<10; n++){
        if ( b[n]>b[ans]){
            ans = n;
        }
    }

    printf("眾數：%d",ans);

    return 0;
}