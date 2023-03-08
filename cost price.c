/* if the total selling price of 15 items and the total profit earned on them is input through the keyboard,
 write the program to find the cost price of one item.
1000
200
1000-200=800/15=53.333
*/
#include<stdio.h>
int main()
{ float s,p,c;
  printf("\nEnter the selling price of 15 items:");//1000
  scanf("%f",&s);
  printf("\nEnter the profit:");
  scanf("%f",&p);
  c=(s-p)/15;
  printf("\n cost price of one item is %0.2f",c);
  return 0;
}
