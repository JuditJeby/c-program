#include<stdio.h>
int main(){
int num1,num2,num3;
printf("\nEnter the number1");
scanf("%d",&num1);
printf("\nEnter the number2");
scanf("%d",&num2);
printf("\nEnter the number3");
scanf("%d",&num3);
if(num1>num2)
{ 
  if(num1>num3)
  {
  printf("First number is larger");
  }
}
else if (num2>num3)
{
 
  printf("Second number is larger");
  
}
else
{
  printf("Third number is larger");
}
  return 0;
}
  
  
