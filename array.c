# include<stdio.h>
int pass(int array [],int n)
{
int sum =0;
for ( int i=0;i<n;i++)
{

sum=sum+array[i];
}
return sum;
}



int main()
{
int n,result,i;
printf("Enter the size of array :");
scanf("%d",&n);
int array[n];
printf("Enter the elements :");
for (i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
result =pass(array,n);
printf("The sum of array is :%d",result);

return 0;
}

