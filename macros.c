#include<stdio.h>
#define PI 3.14
int main()
{
float side,sidec,arear,areac,height;

printf("Enter the radius of circle: ");
scanf("%f",&side);
printf("Enter the radius of cylinder :");
scanf("%f",&sidec);
printf("Enter the height of cylinder :");
scanf("%f",&height);

arear=2*PI*side;
areac=2*PI*sidec*(sidec+height);;
printf("The area of circle is :%.2f,The area of cylinder is :%.2f",arear,areac);
return 0;
}
