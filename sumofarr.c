#include<stdio.h>
int main()
{
int row,col,i,j,sum=0;

printf("\n Enter the no of rows and cols");
scanf("%d%d",&row,&col);
int matrix[row][col];
printf("\n Enter the elements");
for (i=0;i<row;i++)
{
    for (j=0;j<col;j++)
    {
      scanf("%d",&matrix[i][j]);
}}
for (i=0;i<row;i++)
    {
    for (j=0;j<col;j++)
    {
     printf("%d\t",matrix[i][j]);

      }
     printf("\n");

if (i==j)
{
sum=sum+matrix[i][j];
}
}
printf("sum is :%d",sum);
return 0;
}
