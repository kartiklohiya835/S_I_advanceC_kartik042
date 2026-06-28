/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int num,i;
 printf("enter the number");
 scanf("%d",&num);
 for(i=2;i<num;i++)
 {
   if (num%i==0)
   {
     break;
   }
 }
 if(num==i)
 {
   printf("%d is a prime number",num);
 }
 else {
 printf("%d is not a prime number",num);
 }
  return 0;
}