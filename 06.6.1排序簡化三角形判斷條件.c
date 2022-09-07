#include <stdio.h>

int main(){
    int a,b,c,t;
    printf("Please enter 3 number:");
    scanf("%d%d%d",&a,&b,&c);

    if(b>a)
    {
        t=a;
        a=b;
        b=t;
    }
    if(c>a)
    {
        t=c;
        c=a;
        a=t;
    }
    if(c>b)
    {
        t=c;
        c=b;
        b=t;
    }

    if( a==c)
        {
            printf("Regular triangle");
        }

    if( a==b || b==c)
        {
            printf("Isosceles triangle");
        }
    
    if( a*a==b*b+c*c)
        {
            printf("Rectangular triangle");
        }

    return 0;
}