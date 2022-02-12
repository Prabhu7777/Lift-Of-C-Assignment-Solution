//Q3
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number here\n");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0:
        printf("The number is even");
        break;
        case 1:
        printf("The number is odd");
    }
return 0;
}