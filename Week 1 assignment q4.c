//Q4
#include <stdio.h>
int main()
{
    float a,b;
    char operation;
    printf("Enter the two numbers & the operations:\n");
    scanf("%f%f%s", &a,&b,&operation);
    switch (operation)
    {
        case ('+'):
        printf("The addition of the two no.s is %f", a+b);
        break;
        
        case('-'):
        printf("The subtraction of the two no.s is %f", a-b);   
        break;
        
        case('*'):
        printf("The Multiplication of the two no.s is %f", a*b);
        break;
        
        case('/'):
        printf("The Division of the two no.s is %f", a/b);
        break;
    }
    return 0;
}