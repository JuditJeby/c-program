#include<stdio.h>
int main()
{
char str1[20];
printf("\n Enter the string");
fgets(str1,sizeof(str1),stdin);
int length =0;
for( length=0;str1[length]!='\0';length++);

int i = length-1;
for( int j=0;j<length/2;j++)
{int temp = str1[i];
str1[i]=str1[j];
str1[j]=temp;
i--;
}
printf("\n The reversed string is:");
puts(str1);
return 0;
}
