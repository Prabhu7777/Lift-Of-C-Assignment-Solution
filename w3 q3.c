#include <stdio.h>
int odd_even(int a);
int main()
{
    int a;
    printf("ENter the no. you wish to check: ");
    scanf("%d",&a);
    if (odd_even(a)==1)
    {
        printf("The no. you have entered is even.");
    }
    else{
        printf("The no. you have entered is odd.");
    }
    return 0;
}
int odd_even(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}