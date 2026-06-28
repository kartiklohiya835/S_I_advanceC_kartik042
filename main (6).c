/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int arr[]={1,2,3,4,5};    
int n=5,k=2;
int i,temp[n];
for(i=0;i<n;i++)
{
    temp[(i+k) %n]=arr[i];
}
    for(i=0;i<n;i++)
    {
    printf("%d",temp[i]);
    }
    return 0;
}