//Q5
#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("Enter the radius here\n");
    scanf("%f",&r);
    d=2*r;
    c=d*3.14;
    a=3.14*r*r;
    printf("\nThe diameter is %f\n",d);
    printf("\nThe circumference is %f\n",c);
    printf("\nThe area is %f\n",a);
return 0;
}