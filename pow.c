#include<stdio.h>
int mult(int n ,int pow )
{
if (pow==0){
return 1;
}
else
{
 return n* mult (n,pow-1);
}}
int main()
{
int n,prod,pow;
printf("Enter the number and power");
scanf("%d%d",&n,&pow);
prod=mult(n,pow);
printf("The power is: %d",prod);
 return 0;
 }

