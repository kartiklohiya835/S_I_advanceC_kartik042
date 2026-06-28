/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int arr1[]={2,3,4,5,6};
int arr2[]={4,5,6,7,8};
int size1 = sizeof (arr1)/sizeof arr1[0];
int size2 = sizeof (arr2)/sizeof arr2[0];

for(int i=0;i<size1;i++)
{
   int count=0;
    for(int j=0;j<size2;j++)
    {
        if(arr1[i]==arr2[j])
        {
        count++;
        printf("%d",arr1[i]);
        break;
    }}
}
    return 0;
}