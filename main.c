#include <stdio.h>
#include<limits.h>


int main()
{
    printf("The harsh character is:%c\n",'#');
    printf("My height=%f feet and weight=%d kg\n",5.7,60);

    int X=5;
    int Y=10;
    int M;
    printf("%d+%d=%d\n",X,Y,X+Y);
    M=X*Y-20;
    printf("The ans is %d\n",M);

    int a=10;
    int b=3;
    printf("Result is :%d\n",a/b);
    printf("Result is :%d\n",a%b);

    int m=2147483647;
    int n=33125456325;
    printf("%d\n",m);
    printf("%d\n",n);
    printf("%lld\n",n);

    printf("size of int in my computer:%d\n",sizeof(int));

    printf("The maximum value of INT=%d\n",INT_MAX);
    printf("The minimum value of INT=%d\n",INT_MIN);
    printf("The maximum value of LONG=%d\n",LONG_MAX);
    printf("The minimum value of LONG=%d\n",LONG_MIN);

    return 0;
}
