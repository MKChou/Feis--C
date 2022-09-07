#include <stdio.h>


float a = 3.1415;
float b = 123.45;
double c = 123.45;

int main(){
    printf("%f\n",a);  //十進位浮點數
    printf("%e\n",a);  //小寫科學記號表示法
    printf("%E\n",a);  //大寫科學記號表示法
    //
    printf("%f\n",b); //(O)
    printf("%f\n",c); //(O)
    printf("%d\n",b); //(X)
    printf("%d\n",c); //(X)

    return 0;
}