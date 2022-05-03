#include <stdio.h>
int max(int a[],int n);
void main()
{
	int i;
    int a[i];
    for(int j=0;j<i;j++)
    {
        scanf("%d",&j);
    }
	int n,m;
    printf("Enter the smallest no. in your array: ");
    scanf("%d",&n);
	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d",m);
}
int max(int a[],int n)
{
	int t,i;
	t=a[0];
	for(i=1;i<n;i++)
        {
		if(a[i]>t)
			t=a[i];
	}
	return(t);
}