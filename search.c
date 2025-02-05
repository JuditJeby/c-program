#include<stdio.h>
int main(){ 
int n,position,i,search;
printf(" Enter the number of elements");
scanf("%d",&n);
int arr[n];
printf(" Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the number to search");
scanf("%d",&search);
for (i=0;i<n;i++)
{
   if (search==arr[i])
   {
   printf("The position of the number is :%d",i+1);
   }
}











return 0;
}
