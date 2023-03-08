#include<stdio.h>
int main()
{ int amt;
 printf("\nEnter the amount to withdraw:");
 scanf("%d",&amt);
 printf("\nrequired notes of 100:%d",(amt/100));
 printf("\nrequired notes of 50:%d",((amt%100)/50));
 printf("\nreuired notes of 10:%d",(((amt%100)%50)/10));
 printf("\namount still remaining:%d\n\n",(((amt%100)%50)%10));
 return 0;
 }
