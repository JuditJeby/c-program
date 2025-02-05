
#include<stdio.h>
int main()
{ 

int n,i,min,max;
printf(" Enter the number of elements");
scanf("%d",&n);
int arr[n];
printf(" Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int smaller=arr[0];
int larger=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]<smaller)
{
smaller=arr[i];
min=i;

}
}
for(i=0;i<n;i++)
{

if(arr[i]>larger)
{
larger=arr[i];
max=i;
}
}
printf("The smallest number is :%d",smaller);
printf("The position of the smaller number is :%d",min+1);
printf("The larger number is :%d",larger);
printf("The position of the larger number is :%d",max+1);


return 0;
}







