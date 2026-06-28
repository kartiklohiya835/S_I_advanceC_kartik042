//traverse the boundary element of a matrix
#include <stdio.h>
int main()
{
  int r,c;
  scanf("%d%d",&r,&c);
  int a[r][c];
  int i,j;
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      if(i==0||j==c-1||i==r-1||j==0)
      {
        printf("%d",a[i][j]);
      }
    }
  }
  return 0;
}