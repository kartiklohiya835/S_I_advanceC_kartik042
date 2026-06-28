//equilibrium index
#include <stdio.h>
int main()
{
  int a[]={2,0,0,2,5,9,2,6,1};
  int size=sizeof(a)/sizeof(a[0]);
  int i,j,k;
  int sum1=0,sum2=0;
  for(i=0;i<size;i++)
  {
    sum1=0;
    sum2=0;
    for(j=i+1;j<size;j++)
    {
      sum1=sum1+a[j];
    }
    for(k=i-1;k>=0;k--)
    {
      sum2=sum2+a[k];
    }
    if(sum1==sum2)
    {
      printf("%d is a equilibrium index\n",i);
    }
  }
  return 0;
}
      