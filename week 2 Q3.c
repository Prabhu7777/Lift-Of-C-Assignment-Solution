#include <stdio.h>
int main()
{
   int n,a,b,c,d,e,f,g,h,i,j,k,l,m;
   printf("Enter the number\n");
   scanf("%d",&n);
   if(n>=1 && n<=99)
   {
     a=n%10;
     b=n/10;
     c=a*10+b;
     printf("%d",c);
   }
   else if(n>=100 && n<=999)
   {
     d=n%10;
     e=n/100;
     f=n%100;
     g=f/10;
     h=d*100+g*10+e;
     printf("%d",h);
   }
   else if(n>=1000 && n<=9999)
   {
    i=n%10;
    j=n/1000;
    k=n%1000;
    l=k/10;
    m=i*1000+l*10+j;
    printf("%ld",m);
   }
   else 
   {
       printf("00001");
   }
   return 0;
}