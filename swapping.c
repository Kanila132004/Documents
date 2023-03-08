#include<stdio.h>
int main()

{
    int c,d,b;
    printf("\nEnter the value of two varible:");
    scanf("%d%d",&c,&d);
    printf("c:%d d:%d",c,d);
    b=c;
    c=d;
    d=b;
    printf("c=%d d=%d",c,d);
    return 0;
}
