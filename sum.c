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
}}
for (i=0;i<row;i++)
    {
       for (j=0;j<col;j++)
        {
              printf("%d\t",matrix[i][j]);
             }
             printf("\n");
}
int mat[row][col];
printf("\n Enter the elements");
         for (i=0;i<row;i++)
           {
              for (j=0;j<col;j++)
           {
           scanf("%d",&mat[i][j]);
       }}
for (i=0;i<row;i++)
          {
             for (j=0;j<col;j++)
              {
               printf("%d\t",mat[i][j]);
            }
printf("\n");
}
int mat3[row][col];
printf("The matrix sum is:\n");
for (int i=0;i<row;i++)
    { 
      for (int j=0;j<col;j++)
       {
         
        mat3[i][j]=matrix[i][j]+mat[i][j];
        printf("%d\t",mat3[i][j]);
        }
  printf("\n");
}

    
     
     
     

return 0;
}
