#include<stdio.h>
int main(){
int number,fact;
fact=1;
printf("Enter the number");
scanf("%d",&number);
while(number>0)
{

fact=fact*number;
number--;
}

printf("%d",fact);
return 0;
}
  
