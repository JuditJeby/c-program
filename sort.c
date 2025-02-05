#include<stdio.h>
int main()
{ 
int lim,i;
printf("Enter the limit:");
scanf("%d",&lim);
int arr[lim];
printf("Enter the elements:");
for(i=0;i<lim;i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<lim-1;i++)
{
for (int j=0;j<lim-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}

printf("\nThe sorted array:\t");
for(int i=0;i<lim;i++)
{
printf("%d\t",arr[i]);
}

return 0;
}
