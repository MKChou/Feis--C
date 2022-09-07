#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    int dice;
    int i;
    int a=0, b=0, c=0, d=0, e=0, f=0;

    srand(time(0));

    for ( i=1; i<=6000; i++){
        dice = rand()%6+1;

        //printf("%d\n",dice);
    

        switch (dice)
        {
        case 1:
            a++;
            break;
        
        case 2:
            b++;
            break;
        
        case 3:
            c++;
            break;
        
        case 4:
            d++;
            break;
        
        case 5:
            e++;
            break;
        
        case 6:
            f++;
            break;
        
        default:
            printf("error");
        }
    }
    printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d",a,b,c,d,e,f);
}