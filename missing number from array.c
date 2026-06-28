//find the missing number from the array
#include <stdio.h>
int main()
{
  int a[6]={1,2,3,4,6};
  int size=sizeof(a)/sizeof(a[0]);
  int i,sum_natural=0,sum_element=0;
  int mis_number;
  for(i=0;i<size;i++)
  {
    sum_element+=a[i];
  }
  sum_natural=size*(size+1)/2;
  mis_number=sum_natural-sum_element;
  printf("%d",mis_number);
  return 0;
}
  