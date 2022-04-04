#include <stdio.h>  
#include <string.h>
int main()  
{  
    char first_string[20],second_string[20];  
    int l,i,j=0;
    printf("Enter the first string ");  
    gets(first_string);  
    printf("\nEnter the second string ");  
    gets(second_string);  
   strcat(first_string,second_string);
   printf("%s\n",first_string);
   l=strlen(first_string);
   for(i=l-1;i>=0;i--)
   {
  printf("%c",first_string[i]);
   }
  
return 0;
}