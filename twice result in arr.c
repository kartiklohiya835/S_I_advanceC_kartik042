/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{ 
int arr[]={2,7,5,9,1,6,3,9,2,7};
int size= sizeof (arr)/sizeof arr[0];
    
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            { 
                count++;
                
        if(count>size/2)
            {
            printf(" %d",arr[i]);
            break;
            }}
            }
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
        return 0;
    
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               