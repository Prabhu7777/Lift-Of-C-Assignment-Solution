#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("Enter two no.s: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int k;
    k=a;
    a=b;
    b=k;
    printf("%d %d",a,b);
}