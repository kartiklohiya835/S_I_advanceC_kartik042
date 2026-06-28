/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int x){
   int fact=1;
   for(int i=2;i<=x;i++){
     fact=fact*i;  
   }
   return fact;
}
 int main()
 {
     int n,r;
     printf("Enter n,r");
     scanf("%d%d",&n,&r);
     int ncr=fact(n)/(fact(r)*fact(n-r));
      printf("%d",ncr);
 

    return 0;
}