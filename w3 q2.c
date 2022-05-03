#include <stdio.h>
int prime(int a);
int main()
{
    int a;
    printf("Enter the no. you wish to check");
    scanf("%d",&a);
    if (prime(a)==1)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    return 0;

}
int prime(int a)
{
    int j=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            j++;
        }
    }
    if (j==2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}