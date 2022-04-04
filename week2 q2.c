#include <stdio.h>
int main()
{
    int n[10],s=0,k=0;
    for (int i=1;i<=10;i++)
{
    scanf("%d",&n[i]);
}
for(int j=1;j<=10;j++)
{
    if(n[j]%2==0)
    {
        s=s+n[j];
    }
    
    else 
    {
        k=k+n[j];
    }
}
printf("The sum ofeven no.s is %d\n",s);
printf("The sum of odd no.s is %d\n",k);
return 0;
}