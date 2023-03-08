#include<stdio.h>
int main(){
int a,b;
printf("enter the two number:");
scanf("%d%d",&a,&b);
printf("\n A:%d B:%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n A:%d B:%d",a,b);
return 0;}
