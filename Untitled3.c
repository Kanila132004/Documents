#include<stdio.h>
int main()
{
  int a;
  printf("Enter the value of a:%d",a);
  scanf("%d",&a);

    if(a<0){
  printf("%d is negative",a);
  }
    else if(a==0)
  {
  printf("%d is equal to zero",a);
  }
    else if(a>0)
  {
  printf("%d is positive",a);
  }
  return 0;
  }
