#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("\n Enter the string 1");
fgets(str1,sizeof(str1),stdin);
printf("\n Enter the string 2");

fgets(str2,sizeof(str2),stdin);
int result= strcmp (str1,str2);
if (result==0)
{
printf("The strings are equal");
}
else if (result<0)
{
printf("The second string is larger");
}
else
{
printf("The first string is larger");
}
return 0;
}

