/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int num,temp,rem,count=0,sum=0,power=0;
    printf("Enter the number");
    scanf("%d",&num);
    for(int temp=num;temp>0;temp/=10)
    {
        count++;
        printf("\n%d,count");
    }
     for(int temp=num;temp>0;temp/=10)
     {
         rem=temp%10;
         int power=pow(rem,count);
         sum+=power;
     }
    if(sum==num){
    printf("%d is an armstrong number\n,num");
  }  else{ 
    printf("%d=is not armstrong number\n,num");
  }
    return 0;
}