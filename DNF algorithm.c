/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num[] ={2,0,2,1,1,0,1,2,0,0};
    int n = sizeof(num) /sizeof(num[0]);
    int low = 0,mid = 0,high= n-1;
    
    while(mid<=high){
    if(num[mid]==0){
    int temp=num[low];
    num[low]=num[mid];
    num[mid]=temp;
    low++;
    mid++;
    
 } else if(num[mid]==1){
    mid++;
  }  else{
      
      int temp=num[mid];
    num[mid]=num[high];
    num[high]=temp;
    high--;
}

}
printf("sorted array:");
for(int i=0;i<n;i++){
    printf("%d",num[i]);
    
}
    return 0;
}