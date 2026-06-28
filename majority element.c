// majority element
#include <stdio.h>
int main() {
    int a[6]={1,2,1,3,1,1};
    int n=sizeof(a)/sizeof(a[0]);
        int i,j,count=0;
        for(i=0;i<n;i++)
        {
          count=0;
          for(j=i;j<n;j++)
          {
            if(a[i]==a[j])
            {
            count++;
          }}
        if(count>n/2)
        printf("%d is a majority element",a[i]);
       }
    return 0;
}