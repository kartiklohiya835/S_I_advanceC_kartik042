/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int i,j,k;
 int n;
 printf("Enter the value:,n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
     for(j=n;j>=i;j--)
     printf(" ");
 
 for(k=1;k<=i;k++)

    printf("%d",k);

    for(int l=i-1;l>=1;l--)
    printf("%d",l);
    printf("\n");
}
    return 0;
}