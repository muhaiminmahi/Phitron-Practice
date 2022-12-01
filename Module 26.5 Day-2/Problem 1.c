#include<stdio.h>
int main()
{
    int *a,*b,x,y;
    a=&x;
    b=&y;
    scanf("%d %d",a,b);
    printf("%.3f",(*a+*b)/2.0);
}

