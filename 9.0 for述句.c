// for (初始式;條件式;迴圈式) {程式片段}

#include <stdio.h>

int main(){
    int count,N;
    
    printf("Please enter a number:");
    scanf("%d",&N);

    for (count = 1; count<=N; count=count+1){
        printf("number:%d\n",count);
    }
    return 0;
}