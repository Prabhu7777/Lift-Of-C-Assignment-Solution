#include <stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],s=0,p=1;
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int k=1;k<=2;k++)
    {
        for (int l=1;l<=2;l++)
        {
            scanf("%d",&arr2[k][l]);
        }
    }
    for (int m=1;m<=2;m++)
    {
        for(int n=1;n<=2;n++)
        {
            s=s+arr1[m][n]+arr2[m][n];
            p=p*arr1[m][n]*arr2[m][n];
        }
    }
    printf("The sum is %d\n",s);
    printf("The product is %d\n",p);
}