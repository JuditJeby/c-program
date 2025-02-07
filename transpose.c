#include<stdio.h>
int main()
{
int row,col,i,j;

printf("\n Enter the no of rows and cols");
scanf("%d%d",&row,&col);
int matrix[row][col];
printf("\n Enter the elements");
for (i=0;i<row;i++)
{
for (j=0;j<col;j++)
{
scanf("%d",&matrix[i][j]);
}}for (i=0;i<row;i++)
{
for (j=0;j<col;j++)
{
printf("%d\t",matrix[i][j]);
}
printf("\n");
}

printf("The transpose matrix of the given matrix is :\n");

for (i=0;i<row;i++)
{
for (j=0;j<col;j++)
{
printf("%d\t",matrix[j][i]);
}
printf("\n");
}
return 0;
}
