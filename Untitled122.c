#include<stdio.h>
int main()
{
  int a;
  printf("\nEnter the value of a:%d",a);
  scanf("%d",&a);
  if(a%2==0){
    {
      printf("\n %d is divisible by 2",a);
     }
        if(a%3==0)
          {
              printf("\n %d is divisible by 3",a);
            }
        else{
        printf("\n %d is not divisible by 3",a);
        }
         }
  else
        if(a%4==0)
      {
         printf("\n %d is divisible by 4",a);
      }
      else
      {
         printf("\n %d is not divisible by 4",a);
      }
   return 0;
}

