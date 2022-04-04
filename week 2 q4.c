#include <stdio.h>
int main()
{
    int n,n1,t1=0,t2=1;
    printf("Enter the no of terms of the fibonacci series\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",t1);
        n1=t1+t2;
        t1=t2;
        t2=n1;
    }
}