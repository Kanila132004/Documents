#include<stdio.h>
int main()
{  char name[10];
  int age;
  printf("\nEnter your name:");
  scanf("%d",name);
  printf("\nEnter the age:");
  scanf("%d",&age);
  if(age>=18)
  {
    printf("eligible for voting");}
  else
    printf("not eligible for voting");
   return 0;
   }
