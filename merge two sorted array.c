// merge two sorted array
#include <stdio.h>
int main()
{
  int a[]={3,4,5,6};
  int b[]={1,2,7,8,9};
  int size1=sizeof(a)/sizeof(a[0]);
  int size2=sizeof(b)/sizeof(b[0]);
  int  size=size1+size2;
  int i,k=0,l=0,j,c[size];
  for (i=0;i<size1;i++)
  {
    c[k]=a[i];
    k++;
  }
  for (j=size1;j<size;j++)
  {
    c[j]=b[l];
    l++;
  }
  for(i=0;i<size;i++)
  {
    int min=i;
    for(j=i+1;j<size;j++)
    {
      if (c[min]>c[j])
      {
        min=j;
      }}
      int temp=c[min];
      c[min]=c[i];
      c[i]=temp;
  }
    for (i=0;i<size;i++)
    printf("%d",c[i]);
    
  return 0;
}
    